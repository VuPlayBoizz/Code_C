#include<bits/stdc++.h>
using namespace std;
void fibo(int n){
    cout << "0 1 ";
    long long F0=0;
    long long F1=1;
    long long Fn;
    for(int i=3;i<=n;i++){
        Fn = F0+F1;
        cout << Fn <<' ';
        F0=F1;
        F1=Fn;
    }
}
int main(){
    int n; cin >>n;
    fibo(n);
}