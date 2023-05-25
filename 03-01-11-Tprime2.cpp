#include<bits/stdc++.h>
using namespace std;
int A[1000001];
void Sang(){
    for(int i=1;i<=1000000;i++){
        A[i]=1;
    }
    A[0]=A[1]=0;
    for(int i=2;i<=1000;i++){
        if(A[i]==1){
            for(int j=i*i;j<=1000000;j+=i){
                A[j]=0;
            }
        }
    }
}
int main(){
    Sang();
    int T; cin >> T;
    while(T--){
        long long n; cin >> n;
        int dem = 0;
        for(int i=1;i<=sqrt(n);i++)
        {
            if(A[i])    dem++;
        }
        cout << dem ;
        cout << endl;
    }
    

}