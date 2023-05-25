#include<bits/stdc++.h>
using namespace std;
#define ll long long
int check(string s){
    int l = 0, r = s.size() - 1;
    while(l <= r){
        if(s[l] != s[r])    return 0;
        l++; r--;
    }
    return 1;
}
int main(){
    string s; getline(cin, s);
    if(check(s))    cout << "YES";
    else    cout << "NO";

}