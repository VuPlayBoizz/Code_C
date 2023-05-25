#include<bits/stdc++.h>
using namespace std;
#define ll long long
int a[10000001];

void Nhap(int a[] , int n){
    for(int i = 0; i < n; i++){
       cin >> a[i] ;
    }
}

void Xuat(int a[] , int n){
    for(int i = 0; i < n; i++){
       cout << a[i] << ' ' ;
    }
}

bool cmp(int a, int b){
    if(abs(a) % 2 == 0 && abs(b) % 2 == 0){
        if(a <= b)  return true;
    }    
    else if(abs(a) % 2 == 1 && abs(b) % 2 == 1){
        if(a <= b) return true;
        return false;
    }
    else if (abs(a) % 2 == 0 && abs(b) % 2 == 1) return true;
    return false;
}
int main(){
    int n ; cin >> n ;
    Nhap(a,n);
    sort(a, a + n, cmp);
    Xuat(a,n);
}