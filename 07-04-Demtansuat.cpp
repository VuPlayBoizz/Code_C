#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    string s; getline(cin, s);
    int cnt[256] = {0};
    for(int i = 0; i < s.size(); i++){
        cnt[s[i]]++;
    }
    for(int i = 0; i < 256; i++){
        if(cnt[i] != 0){
            cout << (char)i << ' ' << cnt[i] << endl;
        }
    }
}
//c2
#include <bits/stdc++.h>

using namespace std;

int main() {
    map<char,int> mp;
    string s;
    getline(cin, s);
    int n = s. length() ;
    for(int i=0;i<n;i++){
        mp[s[i]]++;
    }
    for(auto it:mp){
        cout<<it.first<<" "<<it.second<<endl;
    }
    return 0;
}
