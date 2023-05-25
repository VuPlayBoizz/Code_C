#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll hamMu2(ll m, ll n)
{
    ll res = 1;
    // res : result : ket qua
    while (n)
    {
        if (n & 1)
        {
            res *= m;
        }
        n = n / 2; // bo di bit cuoi cung;
        m *= m;    // bu phan mat di
    }
    return res;
}
int main(){
    int t ; cin >> t;
    while(t--){
        ll a , b ; cin >> a >> b ;
        cout << hamMu2(a,b)<< endl;
    }
}