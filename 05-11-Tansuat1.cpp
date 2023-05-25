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
void Xuli(int a[], int n){
    for(int i = 0 ; i < n ; i++){
        cnt[a[i]]++;
    }
    int dem = 0 , res;
    for(int i = 0 ; i < n ; i++){
        if(cnt[a[i]] > dem){
            dem = cnt[a[i]];
            res = a[i];
        }
        if(cnt[a[i]] == dem){
            if(res > a[i])  res = a[i];
        }
    }
    cout << res << ' ' <<dem ;

}
int main(){
    int n ; cin >> n;
    Nhap(a,n);
    Xuli(a,n);
}