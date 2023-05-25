#include<bits/stdc++.h>
using namespace std;
void TongUoc(int n){
    long long sum = 0;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            if(i!=n/i){
                sum = sum + i + n / i ;
            }
            else{
                sum+=n/i;
            }
        }
    }
    cout << sum ;
}
int main(){
    int t ; cin >> t;
    while(t--){
    int n ;
    cin >> n;
    TongUoc(n);
    cout << endl;
    }
}