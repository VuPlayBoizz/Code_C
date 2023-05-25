#include<bits/stdc++.h>
using namespace std;
int CountDigit(int n)
{
    int count = 0;
    while (n > 0)
    {
        n /= 10;
        ++count;
    }
    return count;
}
bool IsArmstrong(int n)
{
    int numDigit = CountDigit(n);
    int tmp = n, sum = 0, last;
    while (tmp > 0)
    {
        last = tmp % 10; // lấy chữ số cuối cùng
        tmp /= 10;       // bỏ chữ số cuối cùng
        sum += pow(last, numDigit);
    }
    if (sum == n)
        return true;
    return false;
}
 
int main()
{
    int n;
    printf("\nNhap n = ");
    scanf("%d", &n);
 
    if (IsArmstrong(n) == true)
    {
        printf("\n%d la so armstrong!", n);
    }else{
        printf("\n%d khong la so armstrong!", n);
    }
}