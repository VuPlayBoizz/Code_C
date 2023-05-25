#include<bits/stdc++.h>
using namespace std;
bool Check(int n){
    for(int i = 2 ; i<= sqrt(n) ; i++){
        if(n%i==0)  return false;
    }
    return n > 1 ;
}
bool CSNT(int n){
    while(n){
        if((n%10)!=2&&(n%10)!=3&&(n%10)!=5&&(n%10)!=7) return false;
        n/=10;
    }
    return true;
}
int main(){
    int T;
    cin >> T;
    while(T--){
        int a,b; cin >> a >> b;
        int dem = 0;
        for(int i = a ; i <= b ; i++){
            if(Check(i)&&CSNT(i))   dem++;
        }
         cout << dem;
         cout << endl;
    }
}