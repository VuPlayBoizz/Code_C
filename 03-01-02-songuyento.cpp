//In ra trên một dòng các số nguyên tố không vượt quá n, mỗi số cách nhau một khoảng trắng.
#include<bits/stdc++.h>
using namespace std;
bool Check(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0)  return false;
    }
    return n>1;
}
int main(){
    int a;
    cin >> a;
    for(int j = 1 ; j <=a ;j++){
        if(Check(j))    cout << j << " ";
    }
}