/*Số đẹp được định nghĩa là số mà trong đó số lượng chữ số chẵn và lẻ của n là bằng nhau.*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin >> n;
    int A = 0;
    int B = 0;
    while(n!=0){
        if((n%10)%2==0) A++;
        else B++;
        n/=10;
    }
    if(A==B) cout << "YES";
    else cout << "NO";
}