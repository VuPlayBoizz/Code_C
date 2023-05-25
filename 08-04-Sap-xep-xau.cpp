#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    string s; getline(cin, s);
    string word;
    vector<string> v;
    stringstream ss(s);
    while(ss >> word){
        v.push_back(word);
    }
    sort(v.begin(), v.end());
    for(auto x : v){
        cout << x << ' ';
    }
}