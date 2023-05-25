#include<bits/stdc++.h>
using namespace std;
long long Check(long long i,long long j){
    while(i!=j){
        if(i>j){
            i = i - j;
        }
        else    j = j - i;
    }
    if(i == 1)  return 1;
    else return 0;
}
int main(){
    long long a , b ;
    cin >> a >> b ;
    if(Check(a,b))  cout << "YES";
    else cout <<"NO";
}