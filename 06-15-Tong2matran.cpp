#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n , m ; cin >> n >> m ;
    ll a[n][m] ;
    ll b[n][m] ;
    for(int i = 0 ; i < n ; i++){
       for(int j = 0 ; j < m ; j++){
          cin >> a[i][j];
       }
    }
    for(int i = 0 ; i < n ; i++){
       for(int j = 0 ; j < m ; j++){
          cin >> b[i][j];
       }
    }
    for(int i = 0 ; i < n ; i++){
       for(int j = 0 ; j < m ; j++){
          cout << a[i][j]+b[i][j] << ' ';
       }
       cout << endl;
    }
}