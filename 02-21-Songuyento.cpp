//Đếm số lượng chữ số của n là số nguyên tố.
#include<bits/stdc++.h>
using namespace std;
bool CheckSNT(long long n){
    int dem =0;
    if(n == 1)  return false;
    else{
        for(int i = 1 ; i<=n;i++){
            if(n%i==0)  dem++;
        }
    
    }
    if(dem ==2) return true;
    else return false;
}
int main(){
    long long a;
    cin >> a;
    int tong =0;
    while(a!=0){
        if(CheckSNT(a%10)==true)    tong++;
        a/=10;
    }
    cout << tong;
}