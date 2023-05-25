#include<bits/stdc++.h>
using namespace std;
long long tong(long long n){
 if(n==1) return 1;
 else return pow(n,2) + tong(n-1);

}
int main()
{
    long long n;cin>>n;
    cout<<tong(n);
    return 0;
}
