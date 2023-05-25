//Nhập vào n nguyên dương không quá 1000 và tính tổng sau, kết quả in ra màn hình.

//S=1^3+2^3+3^3+4^3+……+n^3.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    long long tong =0;
    for(int i = 1 ; i <=n ; i++){
        tong +=(long long )i*i*i;
    }
    cout << tong;
}