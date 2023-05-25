#include<bits/stdc++.h>
using namespace std;
int a[1000001];
void Nhap(int a[] , int n){
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
}
void Xuat(int a[] ,int n){
    int max = INT_MIN ;
    int max2 = INT_MIN;
    for(int i = 0 ; i < n ;i++){
        if(max < a[i]){
            max2 = max ;         
            max = a[i];
        }
        else if(a[i] > max2 && a[i] != max){
            max2 = a[i];
        }
    }
    if(max2 == INT_MIN){
        cout << max << ' ' << -1 ;
    } 
    else{
        cout << max << ' ' << max2;
    }

    
}
int main(){
    int n ; cin >> n ;
    Nhap(a,n);
    Xuat(a,n);
}