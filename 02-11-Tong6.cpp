// S=−1+2−3+4−5+…..+(−1)n∗n.
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin >> n;
    long long tong;
    if(n%2==0)  tong = (n*(n+2)/4)-n*n/4;
    else tong = (n*n-1)/4 - (n+1)*(n+1)/4;
    cout << tong;
}