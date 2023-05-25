#include<bits/stdc++.h>
using namespace std;
void cach3(int n){
    for(int i=2;i<=n;i++){
        if(n%i==0){
            int dem = 0;
            while(n%i==0){
                dem++;
                n/=i;
            }
            cout << i << "(" << dem << ")" << " ";
        }
    }
    if(n>1) cout << n << "("<< 1 << ")";
}
int main(){
    int T; cin >> T;
    for(int i=1;i<=T;i++){
        int n ; cin >> n;
        cout << "#TC"<<i<<": ";
        cach3(n);
        cout << endl;
    }
       
}