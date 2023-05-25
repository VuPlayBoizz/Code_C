/*Tích các ước của n*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    if(n<=0) return 0;
    long long tich = 1;
    for(int i = 1 ; i<=n ; i++){
        if(n%i==0) tich =(long long)tich * i;
    }
    cout << tich;
}