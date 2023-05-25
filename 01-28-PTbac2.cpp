/*Phương trình bậc 2*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a,b,c,delta;
    cin >> a >> b >> c;
    if(a==0){
        if(b==0){
            if(c==0){
                cout << "NO";
            }
            else cout <<"INF";
        }
        else{
            if(c!=0)    cout << fixed << setprecision(2) << -1.0*c/b;
            else cout << 0 <<endl;
        }
    }
    else {
        delta = b*b - 4*a*c;
        if(delta > 0){
            double x1 = 1.0*(-b+sqrt(delta))/(2*a), x2 = 1.0*(-b-sqrt(delta))/(2*a);
            cout << fixed << setprecision(2) << x1 << " " << fixed << setprecision(2) << x2;
        }
        else if(delta==0){
            cout << fixed << setprecision(2) << -1.0*b/a;
        }
        else cout << "NO";
    }
    
}
