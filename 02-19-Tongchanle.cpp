/*Nhập vào n (0≤n≤10^18).
Tính tổng các chữ số là số chẵn và tổng các chữ số là số lẻ, in ra 2 tổng chẵn lẻ trên 2 dòng.*/
#include<bits/stdc++.h>
using namespace std;
void Tong(long long n){
    long long tong_chan = 0;
    long long tong_le = 0;
    while(n!=0){
        if((n%10)%2==0) tong_chan += n%10;
        else tong_le += n%10;
        n/=10;
    }
    cout << tong_chan << " " << tong_le ;
}

int main(){
    long long n;
    cin >> n;
    Tong(n);  
}