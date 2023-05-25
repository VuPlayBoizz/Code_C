#include<bits/stdc++.h>
using namespace std;
void Sphenic(int n){
    int dem = 0;
    for(int i=2;i<=sqrt(n);i++){
            while(n%i==0){
                n/=i;
                dem ++;
            }
            
    }
    if(n>1) dem+=1;
    if(dem == 3)cout << 1;
    else cout << 0;
}
int main(){
    int T; cin >> T;
    while(T--){
        int n; cin >> n;
        Sphenic(n);
        cout << endl;
    }
}   