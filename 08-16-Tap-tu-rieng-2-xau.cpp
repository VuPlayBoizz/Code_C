#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    string s1; getline(cin, s1);
    string s2; getline(cin, s2);
    stringstream ss(s1);
    stringstream s(s2);
    string word1, word2;
    set<string> my1;
    set<string> my2;
    while(ss >> word1){
        my1.insert(word1);
    }
    while(s >> word2){
        my2.insert(word2);
    }
    for(auto x : my1){
        if(my2.count(x) == 0) cout << x << ' ';
    }
}