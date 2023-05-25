#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    string s; cin >> s;
    multiset<char> m;    
    for(int i = 0; i < s.size(); i++){
        m.insert(s[i]);
    }
    for(auto x : m){
        cout << x;
    }
}