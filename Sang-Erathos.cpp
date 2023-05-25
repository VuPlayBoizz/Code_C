#include<bits/stdc++.h>
#define ll long long
using namespace std;

int primer[10000001];
//O(log2N) : kiem tra so nguyen
//Sang so nguyen to O(log2log2N):
   // B1 : xem tat ca cac so la so nguyen to (prime[i] = 1);
   // B2 : Loai bo thu cong 2 thang la 0 va 1 (prime[0] = prime[1] = 0)
   // B3 : Sang

void sang(){
    for(int i = 0;i <= 10000000;i++){
        primer[i] = i;
    }
    primer[0] = primer[1] = 1; //B2
    for(int i = 2;i <= sqrt(10000000);i++){
        if(primer[i] == i){
            for(int j = i*i;j <= 10000000;j += i){
                if(primer[j] == j){
                    primer[j] = i;
                }
            }
        }
    }
}

int main(){
    sang();
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        cout << primer[n] << endl;
    }
    return 0;
}