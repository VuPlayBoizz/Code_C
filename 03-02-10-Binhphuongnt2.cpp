#include<bits/stdc++.h>
using namespace std;
bool divide_prime(int n){
    int tmp = n;
    int dem = 0;
    for(int i=2;i <= sqrt(n);i++)
    {
        dem = 0;
        while(n % i == 0){
            dem++;
            n /= i;
        }
        if(dem == 1){
            return false;
        } 
    }
    if(tmp <= 1 || n > 1){
        return false ;
    }   
    return true ;
}
int main(){
    int a , b;
    cin >> a >> b ;
    for(int i = a ; i <= b ; i++){
        if(divide_prime(i)) cout << i << " " ;
    }
}