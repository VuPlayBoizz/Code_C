#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll Dem(ll n){
    if(n < 10)  return 1;
    return 1 + Dem(n/10);
}
int main(){
    ll n ; cin >> n;
    cout << Dem(n);
}