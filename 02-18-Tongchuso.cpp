/*Nhập vào n(0≤n≤10^18), tính tổng các chữ số của n, và in ra kết quả*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin >> n;
    int tong =0;
    while(n!=0){
        tong = tong + n%10;
        n/=10;
    }
    cout << tong;
}