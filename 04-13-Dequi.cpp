#include<bits/stdc++.h>
using namespace std;
#define ll long long
int Tong(int n){
    if(n == 0)   return 0;
    else if(n%2 == 0)   return n + Tong(n-1);
    else return -n + Tong(n-1);
}
int main(){
    int n ; cin >> n;
    cout << Tong(n);
}