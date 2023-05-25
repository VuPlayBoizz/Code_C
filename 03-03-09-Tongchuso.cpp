#include<bits/stdc++.h>
using namespace std;
void Tong(int n){
    int tong = 0;
    while(n){
        tong += n%10;
        n/=10;
    }
    cout << tong ;
}
int main(){
    int t ; cin >> t;
    while(t--){
        int n ; cin >> n ;
        Tong(n);
        cout << endl;
    }
}