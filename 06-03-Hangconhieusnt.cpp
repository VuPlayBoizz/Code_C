#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool SNT(int n){
    for(int i = 2 ; i <= sqrt(n) ; i++){
        if(n % i == 0)  return false;
    }
    return n > 1;
}
int main(){
    int n , m ;  cin >> n >> m;
    int a[n][m];
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            cin >> a[i][j];
        }
    }
    int res = 0 , hang;
    for(int i = 0 ; i < n ; i++){
        int cnt = 0;
        for(int j = 0 ; j < m ; j++){
            if(SNT(a[i][j]))    cnt ++;
        }
        if(cnt > res){
            res = cnt ;
            hang = i ;
        }
    }
    cout << hang + 1 << endl;
    for(int j = 0 ; j < m ; j++){
        if(SNT(a[hang][j])) cout << a[hang][j] << ' ';
    }
}