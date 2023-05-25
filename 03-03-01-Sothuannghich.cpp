#include<bits/stdc++.h>
using namespace std;
bool Ktr(long long n){
    long long k =0;
    long long a = n;
    while(n!=0){
        k=k*10+n%10;
        n/=10;
    }
    if(k==a)    return true;
    else return false;
}
int main(){
    int T; cin >> T;
    while(T--){
        long long n ; cin >> n;
    if(Ktr(n))  cout << "YES" << endl;
    else cout << "NO" <<endl;
    }
    
}