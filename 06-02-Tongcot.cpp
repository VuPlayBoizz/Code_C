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
    for(int j = 0 ; j < m ; j++){
        ll dem = 0;
        for(int i = 0 ; i < n ; i++){
            dem += a[i][j];
        }
        cout << dem << endl;
    }
}