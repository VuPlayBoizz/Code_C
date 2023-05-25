//Nếu kí tự nhập vào là chữ cái, tiến hành in ra chữ cái kế tiếp của nó trong bảng chữ cái ở dạng in thường, ta coi chữ cái kế tiếp của z là a. Nếu kí tự nhập vào không phải là chữ cái in ra INVALID.
#include<bits/stdc++.h>
using namespace std;
int main(){
    char kitu;
    cin >> kitu;
    if('A'<= kitu && kitu <'Z' ){
        char A = kitu + 33;
        cout << A;
    }
    else if('a' <= kitu && kitu <'z')
    {
        char A = kitu + 1;
        cout << A;
    }
    else if(kitu =='z' || kitu =='Z' )  cout << "a";
    else cout <<"INVALID";
}