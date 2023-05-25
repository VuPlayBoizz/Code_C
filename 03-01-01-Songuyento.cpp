
#include <iostream>
using namespace std;

int isprime(int n){
    int flag = 1;
    if (n <2) return flag = 0;
    int i = 2;
    while(i <n){
        if( n%i==0 ) {
            flag = 0;
            break;
        }
        i++;
    }

    return flag;
}

int main(){
    int n;
    cin >>  n;
    int check = isprime(n);
    if( check == 1 ) cout << "YES";
    else cout << "NO";
    return 0;
}