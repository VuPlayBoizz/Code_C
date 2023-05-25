#include<bits/stdc++.h>
using namespace std;
#define ll long long
int idx[100];
bool ngto(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0)  return false;
    }
    return n > 1;
}
void init(){
    int i = 0, cnt = 0;
    while(cnt < 100){
        if(ngto(i)){
            idx[cnt] = i;
            cnt++;
        }
        i++;
    }
}
int main(){
    int n; cin >> n;
    int a[n][n];
    init();
    int tmp = 0;
    int h1 = 0 , cn = n-1 , hn = n-1 , c1 = 0;
        while(h1 <= n - 1 && c1 <= cn){
        // Xây dựng hàng h1:
            for(int j= c1 ; j <= cn ; j++){
                a[h1][j] = idx[tmp];
                tmp++;
            }
        h1++;
        // Xây dựng cột cuối cn
            for(int i = h1 ; i <= hn ;i++){
                a[i][cn] =idx[tmp];
                tmp++;
            }
        cn--;
        // Xây dựng hàng hn
            for(int j = cn ; j >=c1 ; j--){
                a[hn][j] = idx[tmp];
                tmp++;
            }
        hn--;
        // Xây dựng cột c1;
            for(int i = hn ; i >= h1 ; i--){
                a[i][c1] = idx[tmp];
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