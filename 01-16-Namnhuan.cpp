//Năm nhuận là năm chia hết cho 400 hoặc ( chia hết cho 4 và không chia hết cho 100).
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    if(n <=0) cout <<"INVALID";
    else{
        if(n%400==0) cout <<"YES";
        else if(n%4==0&&n%100!=0) cout <<"YES";
        else cout<<"NO";
    }
}