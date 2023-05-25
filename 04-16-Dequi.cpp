#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll le(ll n){
    if(n == 0)  return 1;
    int a = n % 10 ;
    if(a % 2 == 1){
        return le(n/10);
    }
    else{
        return 0;
    }
}
int main(){
    ll n ; cin >> n;
    cout << le(n);
}