//Sn=1/(1∗2)+1/(2∗3)+1/(3∗4)+…..+1/(n∗(n+1))
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    float S = 1 -(float)1/(n+1);
    cout << fixed << setprecision(2) << S;
}