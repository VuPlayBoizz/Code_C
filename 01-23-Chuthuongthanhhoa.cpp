//Chuyển ký tự thường thành hoa
#include<bits/stdc++.h>
using namespace std;
int main(){
    char kitu;
    cin >> kitu;
    if('a'<= kitu && kitu <= 'z'){
        char P = kitu - 32;
        cout << P;
    }
    else cout << kitu;
}