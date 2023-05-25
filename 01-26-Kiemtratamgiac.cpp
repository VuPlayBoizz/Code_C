//a,b,c là độ dài 3 cạnh của tam giác. a,b,c là các số nguyên
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin >> a >> b >> c ;
    if((a+b)>c&&(a+c)>b&&(b+c)>a){
        if((a*a+b*b)==c*c||(a*a+c*c)==b*b||(b*b+c*c)==a*a) cout << "3";
        else if (a==b&&b==c)    cout << "1";
        else if(a==b || a==c || b==c ) cout << "2";
        else cout << "4";
    }
    else cout << "INVALID";
}