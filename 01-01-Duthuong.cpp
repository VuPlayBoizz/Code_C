//Phần nguyên, phần dư
#include<iostream>
using namespace std;
int main(){
    long long a,b,du,thuong ;
    cin >> a >> b ;
    thuong = a/b;
    du = a%b;
    cout << thuong << " " << du ;
}