//Công thức chuyển đơn vị đo nhiệt độ từ C sang F như sau: F = (C * 9 / 5) + 32
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long C;
    cin >> C ;
    double F = C*9/(double)5 + 32;
    cout << fixed << setprecision(2) << F;
}