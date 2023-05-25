#include<bits/stdc++.h>
using namespace std;
void dem(int n){
    int dem =0;
    for(int i = 2 ; i<=sqrt(n);i++){
        if(n%i==0){
            while(n%i==0){
                n /=i;
            }
            dem++;
        }
    }
    if(n>1) dem+=1;
    cout << dem ;
}
int main(){
    int T; cin >> T;
    while(T--){
        int n ; cin >> n;
        dem(n);
        cout << endl;
    }
}