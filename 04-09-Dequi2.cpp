#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll Giaithua(ll n){
    if(n == 1)  return 1;
    return n*Giaithua(n-1);
}
int main(){
    ll n ; cin >> n;
    cout << Giaithua(n);
}