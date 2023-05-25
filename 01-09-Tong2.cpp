//Sn=1^2+2^2+3^2+4^2+5^2+…+n^2
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    long long S = (long long)n*(n+1)*(2*n+1)/6;
    cout << S;
}