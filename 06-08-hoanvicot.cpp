#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n , m ; cin >> n >> m;
    int a[n][m];
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            cin >> a[i][j];
        }
    }
    int x , y ; cin >> x >> y ;
    for(int i = 0 ; i < n ; i++){
        swap(a[i][x-1],a[i][y-1]);
    }
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }
}