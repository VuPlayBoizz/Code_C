#include<bits/stdc++.h>
using namespace std;
bool Check(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0)  return false;
    }
    return n>1;
}
int main(){
    int T;
    cin >> T;
    while (T--){
        int n;
        cin >> n;
        if(Check(n))  cout << "YES" << endl;
        else cout << "NO"<<endl;
    }
}