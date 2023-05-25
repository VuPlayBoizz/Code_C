#include<bits/stdc++.h>
using namespace std;
#define ll long long
int a[1000001];
void Nhap(int a[] , int n){
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
}
void Lietke(int a[] , int n){
    int max1 = INT_MIN;
    int max2 = INT_MIN;
    for(int i = 0 ; i < n ; i++){
        if(max1 < a[i]){
            max2 = max1;
            max1 = a[i];
        }
        else if(a[i] > max2){
            max2 = a[i];
        }
    }
    for(int i = 0 ; i < n ; i++){
        if(a[i] < max2) cout << a[i] << ' ';
    }
}
int main(){
    int n ; cin >> n;
    Nhap(a,n);
    Lietke(a,n);
}