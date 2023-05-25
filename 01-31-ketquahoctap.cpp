/**/
#include<bits/stdc++.h>
using namespace std;
int main(){
    float a1,a2,a3,a4;
    cin >> a1 >> a2 >> a3 >> a4;
    float a5;
    a5 =(a1+a2+a3*2+a4*3)/7;
    if(a5>=8)   cout <<"GIOI";
    else if(6.5<=a5&&a5<8) cout <<"KHA";
    else if(5<=a5&&a5<6.5) cout <<"TRUNG BINH";
    else cout <<"YEU";
}