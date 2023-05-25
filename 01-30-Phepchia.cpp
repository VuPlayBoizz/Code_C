//Cho 3 số nguyên 64 bit a,b,c. In ra dấu / nếu a/b=c hoặc b/c=a hoặc c/a=b và in ra NOSOL nếu không thỏa mãn.
#include<bits/stdc++.h>
using namespace std;

int main(){
    long long a,b,c;
    cin >> a >> b >> c;
    if(a/b==c||b/c==a||c/a==b)  cout << "/";
    else cout <<"NOSOL";
}