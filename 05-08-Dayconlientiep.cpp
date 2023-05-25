#include<bits/stdc++.h>
using namespace std;
#define ll long long
int a[1000001];
void Nhap(int a[], int n){
   for(int i = 0 ; i < n ; i++){
      cin >> a[i];
   }
}
void Xuat1(int a[] , int n){
    int res = 0 , cnt = 1;
    for(int i = 1 ; i < n ; i++){
        if(a[i] != a[i-1])  cnt++;
        else{
            cnt = 1;
        }
        res = max(res,cnt);
    }
    cout << res << endl;
}
void Xuat2(int a[] , int n){
    int res = 0 , cnt = 1;
    for(int i = 1 ; i < n ; i++){
        if(a[i] == a[i-1])  cnt++;
        else{
            cnt = 1;
        }
        res = max(res,cnt);
    }
    cout << res << endl;
}
void Xuat3(int a[] , int n){
    int res = 0 , cnt = 1;
    for(int i = 1 ; i < n ; i++){
        if(a[i] * a[i-1] < 0)  cnt++;
        else{
            cnt = 1;
        }
        res = max(res,cnt);
    }
    if(res == 1)    cout << 0 << endl;
    else    cout << res << endl;
}
void Xuat4(int a[] , int n){
    int res = 0 , cnt = 1 , idx;
    for(int i = 1 ; i < n ; i ++){
       if(a[i] > a[i-1])    cnt++;
       else{
            cnt = 1;
       }
       if(cnt > res){
            res = cnt ;
            idx = i - res + 1 ;
       }
    }
    cout << res << endl;
    for(int i = 0 ; i < res ; i++){
        cout << a[idx + i] << ' ';
    }
}
int main(){
    int n ; cin >> n;
    Nhap(a,n);
    Xuat1(a,n);
    Xuat2(a,n);
    Xuat3(a,n);
    Xuat4(a,n);
}