#include<bits/stdc++.h>
using namespace std;
#define ll long long
int a[1000001];
void Nhap(int a[], int n){
   for(int i = 0 ; i < n ; i++){
      cin >> a[i];
   }
}
void Solve(int a[] , int n){
    int cnt = 0;
    for(int i = 0 ; i < n-1 ; i++){
        if(a[i]==a[i+1])    cnt++;
    }
    cout << cnt << endl;
}
int main(){
    int t ; cin >> t;
    while(t--){
        int n ; cin >> n ;
        Nhap(a,n);
        Solve(a,n);
    }
}