//Đếm số cách đặt 2 con mã trên bàn cờ vua cỡ k × k với k = 1, 2, 3, .. n sao cho chúng không ăn nhau, 2 con mã này được coi là giống nhau.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    long long vitrima;
    long long vitricam;
    for(int i = 1 ; i<=n;i++){
        vitrima = (i*i)*((i*i)-1)/2;
        vitricam = 2*2*(i-1)*(i-2);
        cout << vitrima - vitricam << endl;
    }
}