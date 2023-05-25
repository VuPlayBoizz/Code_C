#include<bits/stdc++.h>
using namespace std;
int prime[1001];
void Sang(){
    for(int i = 0 ; i<=1000;i++){
        prime[i]=1;
    }
    prime[0]=prime[1]=0;
    for(int i = 0; i<=sqrt(1000);i++){
        if(prime[i]){
            for(int j =i*i;j<=1000;j+=i){
                prime[j]=0;
            }
        }
    }
}
int main(){
    Sang();
    int T; cin  >> T;
    while(T--){
        int n; cin >> n;
        for(int i = 0; i<=sqrt(n);i++){
            if(prime[i])    cout << i*i << " " ;
        }
        cout << endl;
    }
}