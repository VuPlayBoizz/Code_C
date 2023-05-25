#include <mega16.h>
#include <delay.h>
#include <alcd.h>
#include <stdio.h>
#define ADC_VREF_TYPE ((0<<REFS1) | (0<<REFS0) | (0<<ADLAR))

unsigned long adc_out=0;
unsigned long vol;         
unsigned long temp;     //dung de luu tru nhiet do hien tai
char text[16],res[16];     //luu tru nhiet do
float U,dpg,giatri;
int mode=0;
// Read the AD conversion result
unsigned int read_adc(unsigned char adc_input)
{
    ADMUX=adc_input | ADC_VREF_TYPE;
    // Delay needed for the stabilization of the ADC input voltage
    delay_us(10);
    // Start the AD conversion
    ADCSRA|=(1<<ADSC);
    // Wait for the AD conversion to complete
    while ((ADCSRA & (1<<ADIF))==0);
    ADCSRA|=(1<<ADIF);
    return ADCW;
}



interrupt [EXT_INT0] void ext_int0_isr(void)
{
    mode=1;
}

// External Interrupt 1 service routine
interrupt [EXT_INT1] void ext_int1_isr(void)
{         
    mode=2;
}

void out_lcd()
{  
    adc_out=read_adc(0);  
    vol=adc_out*5000/1023;         //5000/1023 chinh la do phan giai
    temp= vol/10;    //luu nhiet do cua LM35      
    sprintf(res,"NHIET DO: %d",temp);
    lcd_gotoxy(0,0);
    lcd_puts(res);
    lcd_putchar(0xdf); //ky tu do  
    lcd_putchar('C');
}

void cau_d(){
    dpg = (1.0*5)/1023;
    giatri = read_adc(1);
    U = giatri * dpg;
    sprintf(text,"VOL = %f",U);  
    lcd_gotoxy(0,1);
    lcd_puts(text);
}
void cau_a()
{
    if (temp>=70)
        {      
            lcd_gotoxy(18,0);
            lcd_puts("NHIET DO CAO");   
            PORTB.0=1;   // bat led len
        }
    else
       {   
            lcd_gotoxy(18,0);
            lcd_puts("          ");
            PORTB.0=0;
       }
}         
void cau_b()
{    
    if (PIND.2==0)   //
        {
            lcd_gotoxy(18,1);
            lcd_puts("CO NGUOI");
            PORTB.1=1;
        }
    else
       {   
           lcd_gotoxy(18,1);
           lcd_puts("          ");
           PORTB.1=0;
            mode=0;
       }
     
}
void cau_c()
{
if (PIND.3==0)
        {
            lcd_gotoxy(18,1);
            lcd_puts("CUA MO...");
            PORTB.2=1;
        }
    else
       {   lcd_gotoxy(18,1);
           lcd_puts("          ");
           PORTB.2=0;
            mode=0; 
       } 
}
void main(void)
{
// Declare your local variables here

// Input/Output Ports initialization
// Port A initialization
// Function: Bit7=In Bit6=In Bit5=In Bit4=In Bit3=In Bit2=In Bit1=In Bit0=In 
DDRA=(0<<DDA7) | (0<<DDA6) | (0<<DDA5) | (0<<DDA4) | (0<<DDA3) | (0<<DDA2) | (0<<DDA1) | (1<<DDA0);
// State: Bit7=T Bit6=T Bit5=T Bit4=T Bit3=T Bit2=T Bit1=T Bit0=T 
PORTA=(0<<PORTA7) | (0<<PORTA6) | (0<<PORTA5) | (0<<PORTA4) | (0<<PORTA3) | (0<<PORTA2) | (0<<PORTA1) | (1<<PORTA0);

// Port B initialization
// Function: Bit7=Out Bit6=Out Bit5=Out Bit4=Out Bit3=In Bit2=Out Bit1=Out Bit0=Out 
DDRB=(0<<DDB7) | (0<<DDB6) | (0<<DDB5) | (0<<DDB4) | (0<<DDB3) | (1<<DDB2) | (1<<DDB1) | (1<<DDB0);
// State: Bit7=0 Bit6=0 Bit5=0 Bit4=0 Bit3=0 Bit2=0 Bit1=0 Bit0=0 
PORTB=(0<<PORTB7) | (0<<PORTB6) | (0<<PORTB5) | (0<<PORTB4) | (0<<PORTB3) | (0<<PORTB2) | (0<<PORTB1) | (0<<PORTB0);

// Port C initialization
// Function: Bit7=In Bit6=In Bit5=In Bit4=In Bit3=In Bit2=In Bit1=In Bit0=In 
DDRC=(1<<DDC7) | (1<<DDC6) | (1<<DDC5) | (0<<DDC4) | (1<<DDC3) | (1<<DDC2) | (1<<DDC1) | (1<<DDC0);
// State: Bit7=T Bit6=T Bit5=T Bit4=T Bit3=T Bit2=T Bit1=T Bit0=T 
PORTC=(0<<PORTC7) | (0<<PORTC6) | (0<<PORTC5) | (0<<PORTC4) | (0<<PORTC3) | (0<<PORTC2) | (0<<PORTC1) | (0<<PORTC0);

// Port D initialization                                                                                               
// Function: Bit7=In Bit6=In Bit5=In Bit4=In Bit3=In Bit2=In Bit1=In Bit0=In 
DDRD=(0<<DDD7) | (0<<DDD6) | (0<<DDD5) | (0<<DDD4) | (0<<DDD3) | (0<<DDD2) | (0<<DDD1) | (0<<DDD0);
// State: Bit7=T Bit6=T Bit5=T Bit4=T Bit3=T Bit2=T Bit1=T Bit0=T 
PORTD=(0<<PORTD7) | (0<<PORTD6) | (0<<PORTD5) | (0<<PORTD4) | (1<<PORTD3) | (1<<PORTD2) | (0<<PORTD1) | (0<<PORTD0);

// ADC initialization
// ADC Clock frequency: 1000,000 kHz
// ADC Voltage Reference: AREF pin
// ADC Auto Trigger Source: ADC Stopped
ADMUX=ADC_VREF_TYPE;
ADCSRA=(1<<ADEN) | (0<<ADSC) | (0<<ADATE) | (0<<ADIF) | (0<<ADIE) | (0<<ADPS2) | (1<<ADPS1) | (1<<ADPS0);

// External Interrupt(s) initialization
// INT0: On
// INT0 Mode: Falling Edge
// INT1: On
// INT1 Mode: Falling Edge
// INT2: Off
GICR|=(1<<INT1) | (1<<INT0) | (0<<INT2);
MCUCR=(0<<ISC11) | (0<<ISC10) | (0<<ISC01) | (0<<ISC00);
MCUCSR=(0<<ISC2);
GIFR=(1<<INTF1) | (1<<INTF0) | (0<<INTF2);
UCSRB=(0<<RXCIE) | (0<<TXCIE) | (0<<UDRIE) | (0<<RXEN) | (0<<TXEN) | (0<<UCSZ2) | (0<<RXB8) | (0<<TXB8);
// Alphanumeric LCD initialization
// Connections are specified in the
// Project|Configure|C Compiler|Libraries|Alphanumeric LCD menu:
// RS: PORTC Bit 0
// RD: PORTC Bit 1
// EN: PORTC Bit 2
// D4: PORTC Bit 4
// D5: PORTC Bit 5
// D6: PORTC Bit 6
// D7: PORTC Bit 7
// Characters/line: 16

lcd_init(32);
#asm("sei")
while (1){ 
      // Place your code here
      cau_d();
      out_lcd();
      switch (mode)
             {
             case 0:
                cau_a();
                break;
             case 1:    
                cau_b();
                break;
             case 2:
                cau_c();
                break;
             }
    }
}
