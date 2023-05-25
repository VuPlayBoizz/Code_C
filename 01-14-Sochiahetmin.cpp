//Số chia hết nhỏ nhất
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin >> a >> b;
    int thuong = a/b;
    if(a%b==0)  cout << thuong*b;
    else cout << (thuong+1)*b;
}
