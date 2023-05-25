#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll CSC(ll n){
    if(n < 10 ) return n;
    return CSC(n/10);
}
int main(){
    ll n ; cin >> n;
    cout << CSC(n);
}
