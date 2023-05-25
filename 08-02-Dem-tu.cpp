#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    string s; getline(cin, s);
    string word;
    int cnt = 0;
    stringstream ss(s);
    while(ss >> word){
        cnt++;
    }
    cout << cnt;
}