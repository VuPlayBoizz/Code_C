#include<bits/stdc++.h>
using namespace std;
bool Sohoanhao(long long n){
    long long sum = 1;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            sum+=i;
            if(i!=n/i){
                sum+=n/i;
            }
        }
    }
    return sum==n;
}
int main(){
    int t ; cin >> t ;
    while(t--){
        long long n ; cin >> n;
        if(Sohoanhao(n)) cout << "YES" << endl;
        else cout << "NO" << endl;

    }
}