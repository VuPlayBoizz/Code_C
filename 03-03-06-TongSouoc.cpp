#include<bits/stdc++.h>
using namespace std;
void TongSoUoc(int n){
    int Uoc = 1;
    for(int i = 2 ; i<= sqrt(n); i++){
        int cnt = 0;
        while(n % i == 0){
            cnt++;
            n /= i;
        }
        Uoc *= ++cnt;
    }
    if(n > 1)   Uoc *= 2;
    cout << Uoc ;
}
int main(){
    int t; cin >> t;
    while(t--){
        int n ; cin >> n ;
        TongSoUoc(n);
        cout << endl;
    }
}