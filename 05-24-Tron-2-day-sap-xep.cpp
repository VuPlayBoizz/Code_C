#include<bits/stdc++.h>
using namespace std;
#define ll long long

void Nhap(int a[] , int n){
    for(int i = 0; i < n; i++){
       cin >> a[i] ;
    }
}
int main(){
    int t ; cin >> t;
    for(int j = 1; j <= t; j++){
        int n; cin >> n;
        int a[n] , b[n];
        Nhap(a,n);
        Nhap(b,n);
        sort(a, a + n);
        sort(b,b + n, greater<int> ());
        vector<int> v;
        for(int i = 0; i < n; i++){
            v.push_back(a[i]);
            v.push_back(b[i]);
        }
        cout << "Test " << j << ":" << endl;
        for(int i = 0; i < v.size(); i++){
            cout << v[i]<< ' ';
        }
        cout << endl;
    }
}