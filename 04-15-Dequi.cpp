#include<bits/stdc++.h>
using namespace std;
int ckn(int n , int k){
    if(n == k || k == 0)    return 1;
    return ckn(n-1,k-1) + ckn(n-1,k);
}
int main(){
    int n , k;
    cin >>n >>k;
    cout << ckn(n,k);
}