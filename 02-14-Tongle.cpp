//Nhập vào n nguyên dương không qua 106, tính và in tổng sau ra màn hình.
//S=1+3+5+7+…..+2n−1
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    long long sum = 0;
    for(int i = 1; i<=2*n-1 ;i+=2){
        sum = sum + i;
    }
    cout << sum;
}