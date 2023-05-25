#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    string a, b;
    cin >> a >> b;
    int Start = 0;
    int long = 0;
    for(int i = 0; i < b.size(); i++){
        if(a[Start] == b[i]){
            Start++;
            if(Start + 1 == a.size()){
                cout << "YES";
                return;
            }            
        }    
        else    Start = 0;
    }

    cout << "NO";
}