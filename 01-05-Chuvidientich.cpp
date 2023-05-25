//Tính chu vi, diện tích hình tròn

#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int r;
    cin >> r;
    double P = 2*3.14*(double)r;
    double S = 3.14*(double)r*r;
    cout << fixed << setprecision(2) << P <<" ";
    cout << fixed << setprecision(2) << S;
}
