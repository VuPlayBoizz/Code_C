#include<bits/stdc++.h>
using namespace std;
#define ll long long
int cnt[26];
// int vietHoa(string &s){
//     for(int i = 0; i < s.size(); i++){
//         s[i] = toupper(s[i]);
//     }
// }
// int vietThuong(string &s){
//     for(int i = 0; i < s.size(); i++){
//         s[i] = tolower(s[i]);
//     }
// }
int pangram(string s){
    for(int i = 0; i < s.size(); i++){
        s[i] = tolower(s[i]);
    }
    for(int i = 0; i < s.size(); i++){
        cnt[s[i] - 'a'] = 1;
    }
    for(int i = 0 ; i < 26 ; i ++){
       if(cnt[i] == 0)  return 0;
    }
    return 1;
}
int main(){
    string s; getline(cin, s);
    if(pangram(s) == 1)  cout << "YES";
    else    cout << "NO";
}