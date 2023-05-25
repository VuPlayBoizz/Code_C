#include<bits/stdc++.h>
using namespace std;
bool Check(int n){
    for(int i = 2 ; i <= sqrt(n); i++){
        if(n % i == 0)    return false;
    }
    return n > 1;
}
int Tong1(int n){
    int Sum1 = 0;
    while(n){
        Sum1+=n%10;
        n/=10;
    }
    return Sum1;
}
int Tong2(int n){
    int Sum2 = 0;
    int tmp = n;
    for(int i = 2;i <= sqrt(n);i++){
        while(n % i == 0){
            Sum2 += Tong1(i);
            n/=i;
        }
    }
    if(n > 1){
        Sum2 += Tong1(n);
    }
    return  Tong1(tmp)== Sum2 ;
}
int main(){
    int t; cin >> t;
    while(t--){
        int n ; cin >> n;
        if(Tong2(n) && !Check(n) )    cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}   