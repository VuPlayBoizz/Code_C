#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n , m ;  cin >> n >> m;
    int a[n][m];
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 0 ; i < n ; i++){
        ll dem = 0;
        for(int j = 0 ; j < m ; j++){
            dem += a[i][j];
        }
        cout << dem << endl;
    }
}