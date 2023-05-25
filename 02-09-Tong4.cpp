//Nhập vào n nguyên dương không quá 105, tính và in tổng sau ra màn hình, chú ý lấy tới 3 số sau dấu thập phân. S=1+1/2+1/3+1/4+….+1/n
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    float tong = 0;
    while (n>0)
    {
        tong = tong + (float)1/n;
        n--;
    }
    cout << fixed << setprecision(3) << tong ;
}