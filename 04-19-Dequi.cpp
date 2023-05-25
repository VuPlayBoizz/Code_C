#include <bits/stdc++.h>
using namespace std;
long long tong(long long n){
    int a=n%10;
    if(n==0) return 0;
    if(a%2==1)return a+tong(n/10);
    else return tong(n/10);

}
int main()
{
    long long n;
    cin>>n;
    cout<<tong(n);
    return 0;
}
