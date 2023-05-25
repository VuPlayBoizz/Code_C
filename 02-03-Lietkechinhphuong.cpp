/*Liệt kê các số chính phương dương và không vượt quá n*/
#include<bits/stdc++.h>
using namespace std;
bool checkSquareNumber(int n){
    if(n<1)
        return false;
    int i = sqrt(n);
    if(i*i==n)
        return true;
    return false;
}
void printSquareNumber(int n){
    int a = sqrt(n);
    if(checkSquareNumber(n))
        for(int i=1;i<a;i++)
            cout<<i*i<<" ";
    else
        for(int i=1;i<=a;i++)
            cout<<i*i<<" ";
}
int main(){
    int n;
    do{
        cin>>n;
    }
    while(n<=0);
    printSquareNumber(n);
    return 0;
}