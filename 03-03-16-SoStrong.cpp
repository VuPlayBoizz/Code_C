#include<bits/stdc++.h>
using namespace std;
int gt(long long n){
    long long res = 1 ;
    for(long long i = 1 ; i <= n ; i++){
        res *= i ;
    }
    return res ;
}
bool Strong(long long n){
    long long tmp = n;
    long long S = 0;
    while(n){
        S += gt(n % 10);
        n /= 10 ;
    }
    if(S == tmp)    return true;
    return false ;
}
int main(){
    int Ok = 0 ;
    long long a , b ; cin >> a >> b;
    for(long long i = a ; i <= b ; i++){
        if(Strong(i)){
            Ok = 1;
            cout << i << ' ' ;
        }
    }
    if(Ok == 0) cout << -1 ;
}