#include<bits/stdc++.h>
using namespace std;
#define ll long long
int a[1000001];
void Nhap(int a[] , int n){
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
}
void Mangtang(int a[] , int n){
    int max = INT_MIN;
    for(int i = 0 ; i < n ;i++){
        if(a[i] > max){
            cout << a[i] << ' ';
            max = a[i];
        }
    }
}
int main(){
    int n ; cin >> n;
    Nhap(a,n);
    Mangtang(a,n);
}