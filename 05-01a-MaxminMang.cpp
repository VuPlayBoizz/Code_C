#include<bits/stdc++.h>
using namespace std;
#define ll long long
void Nhap(int a[] , int n){
    for(int i = 0 ; i < n ;i++){
        cin >> a[i];
    }
}
void Max(int a[] , int n){
    int max = a[0];
    for(int i = 1 ; i < n ; i++){
        if(max < a[i]){
            max = a[i];
        }
    }
    cout << max << ' ';
}
void Min(int a[] , int n){
    int min = a[0];
    for(int i = 1 ; i < n ; i++){
        if(min > a[i]){
            min = a[i];
        }
    }
    cout << min;
}
int main(){
    int n ; cin >> n ;
    int a[n];
    Nhap(a,n);
    Max(a,n);
    Min(a,n);
}