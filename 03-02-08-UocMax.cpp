#include<bits/stdc++.h>
using namespace std;
void Check(int n){
    int tmp;
    for(int i=2;i<=sqrt(n);i++){
        while(n%i==0){
            tmp=i;
            n/=i;
        }
    }
    if(n!=1){
        tmp = n;
    } 
    cout << tmp;
}
int main(){
    int T; cin >> T;
    while(T--){
        int n; cin >> n;
        Check(n);
        cout << endl;
    }
}