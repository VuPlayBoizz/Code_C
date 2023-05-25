#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll dao(ll n){
    ll res = 0;
    while(n){
        res = res*10 + n%10;
        n /= 10;
    }
    return res;
}
void solve(ll n){
    int c2 = 0 , c3 = 0 , c5 = 0 , c7 = 0 ;
    ll m = dao(n);
    while(n){
        int r = n%10;
        if(r == 2)  c2++;
        if(r == 3)  c3++;
        if(r == 5)  c5++;
        if(r == 7)  c7++;
        n /= 10;
    }
    while(m){
        int r = m%10;
        if(r == 2 && c2 != 0){
            cout << 2 << ' ' << c2 << endl ;
            c2 = 0 ;
        }
        if(r == 3 && c3 != 0){
            cout << 3 << ' ' << c3 << endl ;
            c3 = 0 ;
        }
        if(r == 5 && c5 != 0){
            cout << 5 << ' ' << c5 << endl ;
            c5 = 0 ;
        }
        if(r == 7 && c7 != 0){
            cout << 7 << ' ' << c7 << endl ;
            c7 = 0 ;
        }
        m /= 10 ;
    }

}
int main(){
    ll n ; cin >> n;
    solve(n);
}