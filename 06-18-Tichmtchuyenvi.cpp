#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n , m ; cin >> n >> m ;
    ll a[n][m] ;
    ll b[m][n] ;
    for(int i = 0 ; i < n ; i++){
       for(int j = 0 ; j < m ; j++){
          cin >> a[i][j];
       }
    }
    for(int i = 0 ; i < m  ; i++){
       for(int j = 0 ; j < n ; j++){
          b[i][j] = a[j][i];
       }
    }
    ll c[n][n];
    for(int i = 0 ; i < n ; i++){
       for(int j = 0 ; j < n ; j++){
          c[i][j] = 0 ;
          for(int k = 0 ; k < m ; k ++){
            c[i][j] += a[i][k]*b[k][j];
          }
       }
    }
    for(int i = 0 ; i < n ; i++){
       for(int j = 0 ; j < n ; j++){
          cout << c[i][j] << ' ';
       }
       cout << endl;
    }
}