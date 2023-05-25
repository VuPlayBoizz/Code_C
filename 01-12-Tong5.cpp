//Sn=−1+2−3+4−5+6+....+(−1)^n∗n
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin >> n;
    long long s=0;
    long long i = 0;
    for(i; i <=n ;i++)
    {
        if(i%2==0)  s+=i;
        else s-=i;
    }
    cout << s;
}