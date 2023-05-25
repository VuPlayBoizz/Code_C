#include<bits/stdc++.h>
using namespace std;
void Dem(int n){
    int chan = 0;
    int le = 0;
    while(n){
        if((n % 10) % 2 == 0)   chan++;
        else le++;
        n /= 10;
    }
    cout << le <<  ' ' << chan ;
}
int main(){
    int n ; cin >> n ;
    Dem(n);
}