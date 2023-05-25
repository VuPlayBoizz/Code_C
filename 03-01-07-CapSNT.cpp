#include<bits/stdc++.h>
using namespace std;
int A[10001];
void Sang(){
    for(int i =0;i<=10000;i++){
        A[i]=1;
    }
    A[0]=A[1]=0;
    for(int i = 0; i*i<=10000;i++){
        if(A[i]){
            for(int j=i*i;j<=10000;j+=i){
                A[j]=0;
            }
        }
    }
}
int main(){
    Sang();
    int T; cin >> T;
    while(T--){
        int n;cin >> n;
        for(int i = 2;i<=n/2;i++){
            if(A[i]&&A[n-i]){
                cout << i << " " << n-i;
                break;
            }    
        }
        cout << endl;
    }
}