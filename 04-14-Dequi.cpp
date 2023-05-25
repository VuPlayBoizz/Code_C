#include <bits/stdc++.h>
using namespace std;
double tong(int n){
    if(n==1) return 1;
    return tong(n-1)+1.0*1/n;
}

int main() {
    int n;
    cin>>n;
    cout<<fixed<<setprecision(2)<<tong(n);
    return 0;
}
