#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    int cnt[256] = {0};
    for(int i = 0; i < s1.size(); i++){
        cnt[s1[i]] = 1;
    }
    for(int i = 0; i < s2.size(); i++){
        if(cnt[s2[i]])  cnt[s2[i]] = 0;
    }
    for(int i = 0; i < 256; i++){
        if(cnt[i] != 0){
            cout <<(char)i;
        }
    }
}