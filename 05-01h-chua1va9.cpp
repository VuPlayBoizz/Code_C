#include<bits/stdc++.h>
using namespace std;
#define ll long long
int a[10000001];
void Nhap(int a[] , int n){
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
}
int Chua1va9(int n){
    int c1 = 0;
    int c9 = 0;
    while(n){
        if(n % 10 == 1) c1 = 1;
        if(n % 10 == 9) c9 = 1;
        n /= 10 ;
    }
    return c1&&c9;
}
int main(){
    int n ; cin >> n;
    Nhap(a,n);
    int Ok = 0 ;
    for(int i = 0 ; i < n ;i++){
        if(Chua1va9(a[i])){
            Ok = 1;
            cout << a[i] << ' ';
        }
    }
    if(Ok == 0) cout << -1 ;
}