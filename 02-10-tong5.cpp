/*Nhập vào n nguyên dương không quá 105, tính và in tổng sau ra màn hình, chú ý kết quả lấy tới 2 số sau dấu thập phân.

S=1/2+1/4+1/6+1/8+…….+1/(2n).*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    float tong = 0;
    for(int i = 1 ; i<=n ; i++){
            tong = tong + (float)1/(2*i);
    }
    cout << fixed << setprecision(2) << tong;
}