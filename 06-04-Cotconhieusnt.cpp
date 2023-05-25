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
    int idx = 0 , cot;
    for(int j = 0 ; j < m ; j++){
        int cnt = 0;
        for(int i = 0 ; i < n ; i++){
            if(SNT(a[i][j]))    cnt ++;
        }
        if(cnt > idx){
            idx = cnt ;
            cot = j ;
        }
    }
    for(int i = 0 ; i < n ; i++){
        cout << a[i][cot] << endl;
    }
}