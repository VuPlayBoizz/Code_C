#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll Tich(ll n){
    int a = n % 10;
    if(n < 10)  return a;
    return a*Tich(n/10);
}
int main(){
    ll n ; cin >> n;
    cout << Tich(n);
}