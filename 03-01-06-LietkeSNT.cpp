#include<bits/stdc++.h>
using namespace std;
bool SNT(int n){
    for(int i = 2 ; i <=sqrt(n) ; i++){
        if(n%i==0)  return false;
    }
    return n > 1;
}
int main(){
    int n; cin >> n;
    int i = 2;
     int dem = 0;
     while(dem < n){
        if(SNT(i)==true){
            cout << i << endl;
            dem ++;
        }
        i++;
    }
}