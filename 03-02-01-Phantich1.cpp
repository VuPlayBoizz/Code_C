#include<bits/stdc++.h>
using namespace std;
void cach1(int n){
    for(int i=2;i<=n;i++){
        while(n%i==0){
            cout << i << " ";
            n/=i;
        }
    }
    if(n>1) cout << n;
}
void cach2(int n){
    for(int i=2;i<=n;i++){
        if(n%i==0){
            while(n % i == 0){
                n /= i;
            }
            cout << i << ' ';
        }
    }
}
void cach3(int n){
    for(int i=2;i<=n;i++){
        if(n%i==0){
            int dem = 0;
            while(n%i==0){
                dem++;
                n/=i;
            }
            cout << i << "(" << dem << ")" << " ";
        }
    }
    if(n>1) cout << n << "("<< 1 << ")";
}
void cach4(int n){
    for(int i=2;i<=n;i++){
        while(n%i==0){
            cout << i ;
            n/=i;
            if(n!=1)    cout << "x";
        }
    }
    if(n>1) cout << n;
}
void cach5(int n){
    for(int i=2;i<=n;i++){
        if(n%i==0){
            int dem =0;
            while(n%i==0){
                dem++;
                n/=i;
            }
            cout << i << "^" << dem;
            if(n!=1)    cout << "*";
        }
    }
    if(n>1) cout << n << "^1";
}
int main(){
    int n; cin >> n;
    cach1(n);
    cout << endl;
    cach2(n);
    cout << endl;
    cach3(n);
    cout << endl;
    cach4(n);
    cout <<endl;
    cach5(n);
}