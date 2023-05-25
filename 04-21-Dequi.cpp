#include<bits/stdc++.h>
using namespace std;
#define ll long long
int a[1000001];
void Nhap(int a[], int n){
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
}
void dem(int a[], int n){
    int dem = 0;
    for(int i  = 0 ; i < n ;i++){
        if((a[i] % 2) == 0) dem++;
    }
    cout << dem;
}
int main(){
    int n ; cin >> n;
    Nhap(a,n);
    dem(a,n);
}