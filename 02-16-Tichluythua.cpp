/*Nhập x,y nguyên không âm và không quá 10, tính x^y và in kết quả ra màn hình.*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,y;
    cin >> x >> y;
    long long A = (long long)pow(x,y);
    cout << A;
}