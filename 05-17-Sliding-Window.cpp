#include<bits/stdc++.h>
using namespace std;
#define ll long long
int a[1000001];
void Nhap(int a[], int n){
   for(int i = 0 ; i < n ; i++){
      cin >> a[i];
   }
}
void Solve(int a[] , int n , int k){
    ll res = 0 , sum = 0 ;
    int idx = 0;
    for(int i = 0 ; i < k ; i++)    sum += a[i];
    res = sum;
    for(int i = 1 ; i < n - k + 1 ; i++){
        sum = sum - a[i-1] + a[i+k-1];
        if(sum >= res){
            res = sum ;
            idx = i ;
        }
    }
    cout << res << endl;
    for(int i = 0 ; i < k ; i++){
        cout << a[i+idx] << ' ';
    }
}
int main(){
    int n ; cin >> n;
    Nhap(a,n);
    int k ; cin >> k;
    Solve(a,n,k);
}