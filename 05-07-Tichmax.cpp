#include<bits/stdc++.h>
using namespace std;
#define ll long long
int a[10000001];
void Nhap(int a[], int n){
   for(int i = 0 ; i < n ; i++){
      cin >> a[i];
   }
}
ll max(ll a , ll b){
    return a > b ? a : b;
}
void Xuli(int a[] , int n){
    int max1 = INT_MIN , max2 = INT_MIN;
    int min1 = INT_MAX , min2 = INT_MAX;
    for(int i = 0 ; i < n ; i++){
        if(a[i] > max1){
            max2 = max1;
            max1 = a[i];
        }
        else if(a[i] > max2)    max2 = a[i];
        if(a[i] < min1 ){
            min2 = min1;
            min1 = a[i];
        }
        else if(a[i] < min2)    min2 = a[i];
    }
    ll res = max(1ll*max1*max2,1ll*min1*min2);
    cout << res;
}
int main(){
    int n ; cin >> n;
    Nhap(a,n);
    Xuli(a,n);
}