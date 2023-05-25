#include<bits/stdc++.h>
using namespace std;
#define ll long long
void vietHoa(string &s){
    for(int i = 0 ; i < s.size() ; i ++){
        s[i] = toupper(s[i]);
    }
}
void chuanHoa(string &s){
    s[0] = toupper(s[0]);
    for(int i = 1 ; i < s.size() ; i ++){
        s[i] = tolower(s[i]);
    }
}
int main(){
    int t; cin >> t;
    cin.ignore();
    while(t--){
        string s; getline(cin, s);
        vector<string> v;
        stringstream ss(s);
        string word;
        while(ss >> word)   v.push_back(word);
        for(int i = 0 ; i < v.size() ; i ++){
            chuanHoa(v[i]);
            cout << v[i] << ' ';
            // if(i == v.size()-2) cout << ", ";
            // else cout << ' ';
        }
        // vietHoa(v[v.size() - 1]);
        // cout << v[v.size() - 1];
        cout << endl;
    }

}