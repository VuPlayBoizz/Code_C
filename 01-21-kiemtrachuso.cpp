//In ra YES nếu kí tự nhập vào là chữ số, NO trong trường hợp ngược lại

#include<bits/stdc++.h>
using namespace std;
bool Check(char kitu)
{
    if('1'<= kitu && kitu <='9')    return true;
    else return false;
}
int main()
{
    char kitu;
    cin >> kitu;
    if(Check(kitu) == true) cout << "YES";
    else cout << "NO";
}