#include<bits/stdc++.h>
using namespace std;
#define ll long long 
ll Chan(ll n){
    if(n == 0)  return 1;
    int a = n % 10 ;
    if(a % 2 == 0)  return Chan(n/10);
    return 0;
}
int main(){
    ll n ; cin >> n;
    cout << Chan(n);
}