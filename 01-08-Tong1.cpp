//Sn=1+2+3+4+…+n
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    long long S = (long long)n*(n+1)/2;
    cout << S;
}