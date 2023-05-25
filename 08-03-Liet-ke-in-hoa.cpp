#include<bits/stdc++.h>
using namespace std;
#define ll long long
int check(string s){
    for(int i = 0; i < s.size(); i++){
        if(s[i] < 'A' || s[i] > 'Z')   return 0;
    }
    return 1;
}
int main(){
    string s; getline(cin, s);
    string word;
    vector<string> v;
    stringstream ss(s);
    while(ss >> word){
        v.push_back(word);
    }
    for(auto x : v){
        if(check(x))    cout << x << ' ';
    }
}