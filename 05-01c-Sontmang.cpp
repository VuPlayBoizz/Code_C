#include<bits/stdc++.h>
using namespace std;
#define ll long long
int a[1000001];
void Nhap(int a[], int n){
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
}
bool nt(int n){
    for(int i = 2 ; i <= sqrt(n) ;i++){
        if(n % i == 0){
            return false;
        }
    }
    return n > 1 ;
}
int main(){
    int n ; cin >> n ;
    Nhap(a , n);
    for(int i = 0 ; i < n ; i++){
        if(nt(a[i]))    cout << a[i] << ' ';
    }
}