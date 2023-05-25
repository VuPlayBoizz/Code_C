#include<bits/stdc++.h>
using namespace std;
int main(){
    int t ; cin >> t;
    while(t--){
        int a , b;
        cin >> a >> b ;
        int c = sqrt(a);
        int d = sqrt(b);
        if(c * c == a){
            for(int i = c ; i <= d ; i++){
                cout << i*i << ' ';
            }
        }
        else{
            for(int i = c + 1 ; i <= d ; i++){
                cout << i * i << ' ';
            }
        }
        cout << endl;
    }
    
}