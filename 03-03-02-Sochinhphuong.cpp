#include<bits/stdc++.h>
using namespace std;
void SCP(long long n){
    if(sqrt(n)==((int)sqrt(n)))   cout << "YES";
    else cout << "NO";
}
int main(){
    int T; cin >> T;
    while(T--){
        long long n; cin >> n;
        SCP(n);
        cout << endl;
    }
}