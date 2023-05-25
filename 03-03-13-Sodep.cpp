#include<bits/stdc++.h>
using namespace std;
int Tong(int n){
    int tong = 0 ;
    while(n){
        tong += n % 10;
        n /= 10 ;
    }
    return tong ;
}
bool Checkfibo(int n){
    long long f0 = 0;
    long long f1 = 1;
    long long fn;
    for(int i = 3 ; i <= 93 ; i++){
        fn = f0 + f1 ;
        f0 = f1 ;
        f1 = fn;
        if(Tong(n) == fn) return true;
    }
    return false;
}
bool CheckSNT(int n){
    for(int i = 2 ; i <= sqrt(n) ; i++){
        if(n % i == 0)  return false;
    }
    return n > 1 ;
} 
int main(){
    int a , b ; cin >> a >> b ;
    int Ok = 0;
    for(int i = a ; i <= b ; i++){
        if(Checkfibo(i) == true && CheckSNT(i) == true){
            Ok ++;
            cout << i << ' ';
        } 
    }
    if(Ok == 0) cout << -1;
}