#include<bits/stdc++.h>
using namespace std;
bool Check(long long n){
    if(sqrt(n) == (int)sqrt(n)) return true;
    else return false;
}
int main(){
    int t ; cin >> t;
    while(t--){
        long long n ; cin >> n ;
        if(Check(n))    cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}