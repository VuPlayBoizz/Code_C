#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool cmp(string a, string b){
    if(a.size() < b.size()) return true;
    else if(a.size() == b.size()){
        for(int i = 0; i < a.size(); i++){
            if(a[i] < b[i]) return true;
            else return false;
        }
    }
    return false;
}
int main(){
    string s; getline(cin, s);
    string word;
    vector<string> v;
    stringstream ss(s);
    while(ss >> word){
        v.push_back(word);
    }
    sort(v.begin(), v.end(), cmp);
    for(auto x : v){
        cout << x << ' ';
    }
}