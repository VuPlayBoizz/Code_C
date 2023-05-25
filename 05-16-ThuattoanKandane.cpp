#include<bits/stdc++.h>
using namespace std;
#define ll long long
int a[1000001];
void Nhap(int a[], int n){
   for(int i = 0 ; i < n ; i++){
      cin >> a[i];
   }
}
void Kandane(int a[] , int n){
    ll sum1 = 0 , sum2 = INT_MIN;
    for(int i = 0 ; i < n ;i++){
        sum1 += a[i];
        sum2 = max(sum1,sum2);
        if(sum1 < 0)    sum1 = 0;
    }
    cout << sum2;
}
int main(){
    int n ; cin >> n;
    Nhap(a,n);
    Kandane(a,n);
}