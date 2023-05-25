#include<bits/stdc++.h>
using namespace std;
#define ll long long
int cnt[256];
int main(){
    string s; getline(cin, s);
    int res = INT_MIN;
    char kiTu;
    for(int i = 0; i < s.size(); i++){
        cnt[s[i]]++;
    }
    for(int i = 0; i < 256; i++){
        if(cnt[i] != 0){
            if(cnt[i] >= res){
                res = cnt[i];
                kiTu = (char)i;
            }
        }
    }
    cout << kiTu;
}