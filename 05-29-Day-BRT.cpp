#include<bits/stdc++.h>
using namespace std;
#define ll long long
int a[10000001];

void Nhap(int a[] , int n){
    for(int i = 0; i < n; i++){
       cin >> a[i] ;
    }
}

int main(){
    int t ; cin >> t;
    while(t--){
        int n; cin >> n ;
        Nhap(a,n);
        sort(a, a + n);
        int cnt = 0;
        int res = INT_MAX;
        for(int i = 1; i < n; i++){
            if(a[i] - a[i-1] < res){
                res = a[i] - a[i-1];
                cnt = 1;
            }
            else if(a[i] - a[i-1]   == res){
                cnt++;
            }
        }
        cout << res << ' ' << cnt << endl;
    }
}