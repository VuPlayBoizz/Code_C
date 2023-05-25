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
    int max = INT_MIN;
    int hang , cot ;
    for(int i = 0 ; i < n ; i++){
        int tong = 0;
        for(int j = 0 ; j < m ; j++){
            tong += a[i][j];
        }
        if(tong > max){
            max = tong ;
            hang = i ;
        }
    }
    max = INT_MIN;
    for(int j = 0 ; j < m ; j++){
        int tong = 0;
        for(int i = 0 ; i < n ; i++){
            if(i != hang){
                tong += a[i][j];
            }
        }
        if(tong > max){
            max = tong ;
            cot = j ;
        }
    }
    for(int i = 0 ; i < n ; i++){
        if(i != hang){
            for(int j = 0 ; j < m ; j++){
                if(j != cot){
                    cout << a[i][j] << ' ';
                }
            }
            cout << endl;
        }
    } 
    
    
}