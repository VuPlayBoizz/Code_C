#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    bool A[n+1];
    for(int i = 2;i<=n;i++){
        A[i]=true;
    }
    for(int i=2;i<=n;i++){
        if(A[i]==true){  
            for(int j= 2 *i;j<=n;j+=i){
                A[j]=false;
            }
        }
    }
    for(int i =2;i<=n;i++){
        if(A[i]==true)  cout << i << " ";
    }
}
