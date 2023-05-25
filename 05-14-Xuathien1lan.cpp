#include<bits/stdc++.h>
using namespace std;
#define ll long long
int a[1000001];
int cnt[1000001];
void Nhap(int a[], int n){
   for(int i = 0 ; i < n ; i++){
      cin >> a[i];
   }
}
void Solve(int a[] , int n){
    for(int i = 0 ; i < n ; i++){
        cnt[a[i]]++;
    }
    for(int i = 0 ; i < n ; i++){
        if(cnt[a[i]] == 1)  cout << a[i] <<' ';
    }
}
int main(){
    int n ; cin >> n;
    Nhap(a,n);
    Solve(a,n);
}