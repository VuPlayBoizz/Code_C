#include<bits/stdc++.h>
using namespace std;
void Tinh(int n){
    int Tong =0;
    for(int i =5;i<=n;i*=5){
        Tong += n/i;
    }
    cout << Tong;
}
int main(){
    int T ; cin >> T;
    while(T--){
        int n ; cin >> n ;
        Tinh(n);
        cout << endl;
    }
}