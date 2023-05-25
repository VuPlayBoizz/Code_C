#include<bits/stdc++.h>
using namespace std;
#define ll long long
int a[1000001];
void Nhap(int a[] , int n){
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
}
bool CSL(int n){
    while(n){
        if((n%10)%2 == 0)    return false;
        n /= 10;
    }
    return true;
}
void Xuat(int a[], int n){
    int dem = 0;
    for(int i = 0 ; i < n ; i++){
        if(CSL(a[i]))   dem++;
    }
    cout << dem << endl ;
    for(int i = 0 ; i < n ; i++){
        if(CSL(a[i]))   cout << a[i] << ' ';
    }
}
int main(){
    int n ; cin >> n;
    Nhap(a,n);
    Xuat(a,n);
}