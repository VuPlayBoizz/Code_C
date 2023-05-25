/*Đếm số lượng ước và liệt kê các ước theo thứ tự tăng dần của số nguyên dương n*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int tong = 0;
    int count = 0;
    for(int i = 1 ; i<=n ; i++){
        if(n%i==0){
            count ++;
        } 
    }
    cout << count << endl;
    for(int i = 1 ; i<=n ; i++){
        if(n%i==0){
            cout << i << " ";
        }
    }
    
}