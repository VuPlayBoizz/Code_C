#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t ; cin >> t ;
    cin.ignore();
    while(t--){
        string s; getline(cin, s);
        for(int i = 0; i < s.size(); i++){
            s[i] = tolower(s[i]);
        }
        vector<string> v;
        string word;
        stringstream ss(s);
        while(ss >> word){
            v.push_back(word);
        }
        cout << v[v.size()-1];// cout << v.back()
        for(int i = 0; i < v.size()-1 ; i++){
            cout << v[i][0];
        }
        cout << "@gmail.com" << endl;
    }
}