#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(int a[], int n){
    vector<int> v ;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        v[a[i]]++;
    }
    int dem = INT_MIN;
    for(int i = 0; i < v.size(); i++){
        if(dem <= v[a[i]]){
            dem = v[a[i]];
        }
    }
    for(int i = 0; i < v.size(); i++){
        if(dem == v[a[i]]){
            cout << a[i] << ' ';
            v[a[i]] = 0;
        }
    }
}
int main(){
    int n ; cin >> n ;
    int a[n];
    solve(a,n);
}