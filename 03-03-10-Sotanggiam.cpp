#include<bits/stdc++.h>
using namespace std;
bool Prime(int n){
    for(int i=2; i<= sqrt(n);i++ ){
        if(n % i == 0)  return false;
    }
    return n > 1;
}  
bool checkInc(int n)
{
    int tmp = INT_MAX;
    while (n)
    {
        if (tmp > n % 10)
            tmp = n % 10;
        else
            return false;
        n /= 10;
    }
    return true;
}
bool checkDec(int n)
{
    int tmp = INT_MIN;
    while (n)
    {
        if (tmp < n % 10)
            tmp = n % 10;
        else
            return false;
        n /= 10;
    }
    return true;
}
int main(){
    int n ; cin >> n ;
    int dem = 0;
    for(int i = pow(10 , n - 1) ; i < pow( 10 , n) ; i++){
        if((checkDec(i) || checkInc(i)) && Prime(i))  dem++;
    }
    cout << dem ;
}