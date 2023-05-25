#include<bits/stdc++.h>
using namespace std;
#define ll long long
int cnt[1000001]={0};
int a[1000001];
void Nhap(int a[] , int n){
    for(int i = 0 ; i < n ; i ++){
        cin >> a[i];
    }
}
void Xuat(int a[] , int n){
    for(int i = 0; i < n ; i++){
        cout << a[i];
    }
}
int main(){
    int n ; cin >> n;
    Nhap(a,n);
    for(int i = 0 ; i < n ; i++){
        cnt[a[i]]++;
    }
    for(int i = 0 ; i < n ; i++){
        if(cnt[a[i]] != 0){
            cout << a[i] << ' ' << cnt[a[i]] << endl;
            cnt[a[i]] = 0 ;
        } 
    }
}