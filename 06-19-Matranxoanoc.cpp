#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n ; cin >> n ;
    int a[n][n];
    int tmp = 1;
    int h1 = 0, cn = n - 1 , hn = n - 1 ,c1 = 0;
    while(h1 <= n - 1 && c1 <= cn){
        // Xây dựng hàng h1:
        for(int j= c1 ; j <= cn ; j++){
            a[h1][j] = tmp;
            tmp++;
        }
        h1++;
        // Xây dựng cột cuối cn
        for(int i = h1 ; i <= hn ;i++){
            a[i][cn] =tmp;
            tmp++;
        }
        cn--;
        // Xây dựng hàng hn
        for(int j = cn ; j >=c1 ; j--){
            a[hn][j] = tmp;
            tmp++;
        }
        hn--;
        // Xây dựng cột c1;
        for(int i = hn ; i >= h1 ; i--){
            a[i][c1] = tmp;
            tmp++;
        }
        c1++;
    }
    for(int i = 0 ; i < n ; i++){
       for(int j = 0 ; j < n ; j++){
          cout << a[i][j] << ' ';
       }
       cout << endl;
    }
}