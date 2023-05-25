/*Nhập vào một dãy n số nguyên dương đều không quá 106. In ra YES nếu số 2021 xuất hiện trong dãy các số vừa nhập, ngược lại in ra NO*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int ok=0;
    for( int i = 0; i < n ; i++){
        int j; cin >> j;
        if(j==2021) ok = 1;
    }
    if(ok ==0 ) cout << "NO";
    if(ok==1)   cout << "YES";
}