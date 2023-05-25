//In ra các số nguyên tố trong đoạn từ a tới b (Chú ý lấy cả 2 cận).
#include<bits/stdc++.h>
using namespace std;
void sang(int l,int r){
    int prime[r-l+1];
    for(int i = 0; i<=r-l+1 ;i++){
        prime[i]=1;
    }
    prime[0]=prime[1]=0;
    for(int i = 2 ; i<= sqrt(r);i++){
        for(int j =max(i*i,(l+i-1)/i*i); j <=r; j+=i){
            prime[j-l]=0;
        }
    }
    for(int i = max(l,2); i<=r ;i++){
        if(prime[i-l])  cout << i << " ";
    }
}
int main(){
    int l,r; cin >> l >> r;
    sang(l,r);
}
