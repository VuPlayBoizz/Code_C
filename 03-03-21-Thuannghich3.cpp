#include<bits/stdc++.h>
using namespace std;
bool Check9(int n){
    while(n){
        if((n%10) == 9)
            return 0;
        n /= 10 ;
    }
    return 1;
}
bool SoTN(int n){
    int tmp = n;
    int k = 0 ;
    while(n){
        k = k * 10 + n % 10 ;
        n /= 10 ;
    }
    if(k == tmp)    return true;
    return false;
}
int main(){
    int n ; cin >> n;
    int dem = 0;
    for(int i = 2 ; i <= n ; i++){
        if(SoTN(i) && Check9(i)){
            dem ++ ;
        }
    }
    cout << dem << endl ;
    for(int i = 2 ; i <= n ; i++){
        if(SoTN(i) && Check9(i)){
            cout << i << ' ' ;
        }
    }
}