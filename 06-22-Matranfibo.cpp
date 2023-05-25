#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll fibo[100];
void fb(){
     fibo[0] = 0 ;
     fibo[1] = 1 ;
    for(ll i = 2 ; i <= 92 ; i++){
         fibo[i] = fibo[i-1] + fibo[i-2];
    }
}
int main(){
    int n  ; cin >> n ;
    ll a[n][n];
    fb();
    int tmp = 0;
    int h1 = 0 , cn = n-1 , hn = n-1 , c1 = 0;
        while(h1 <= n - 1 && c1 <= cn){
        // Xây dựng hàng h1:
            for(int j= c1 ; j <= cn ; j++){
                a[h1][j] = fibo[tmp];
                tmp++;
            }
        h1++;
        // Xây dựng cột cuối cn
            for(int i = h1 ; i <= hn ;i++){
                a[i][cn] =fibo[tmp];
                tmp++;
            }
        cn--;
        // Xây dựng hàng hn
            for(int j = cn ; j >=c1 ; j--){
                a[hn][j] = fibo[tmp];
                tmp++;
            }
        hn--;
        // Xây dựng cột c1;
            for(int i = hn ; i >= h1 ; i--){
                a[i][c1] = fibo[tmp];
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