//Viết chương trình C cho phép nhập vào số ngày, thực hiện chuyển số ngày sang năm, tuần, ngày (Bỏ qua trường hợp năm nhuận)
#include<bits/stdc++.h>
using namespace std;
int main(){
    int A , year , month , day ;
    cin >> A;
    year = A/365 ;
    month = (A%365)/7;
    day = (A%365)%7;
    cout << year <<" "<< month << " " << day;
}
// 373/ 365 = 1 du 8
// 8/7 = 1 du 1