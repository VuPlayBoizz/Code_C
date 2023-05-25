//Tính khoảng cách Euclid giữa 2 điểm trong hệ tọa độ Oxy
#include<bits/stdc++.h>
using namespace std;
int main(){
    int x1,y1,x2,y2;
    cin >> x1 >> y1 >> x2 >> y2 ;
    long long A = (long long)(x1-x2)*(x1-x2) + (long long)(y1-y2)*(y1-y2);
    double B = sqrt(A);
    cout << fixed << setprecision(2) << B;

}