#include<bits/stdc++.h>
using namespace std;
#define ll long long
int a[1000001];
int cnt[1000001];
void Nhap(int a[], int n){
   for(int i = 0 ; i < n ; i++){
      cin >> a[i];
      cnt[a[i]]++;
   }
}
int check(int a[] , int n){
    for(int i = 0 ; i < n ; i++){
        if(a[i] == 25)  cnt[25]++;
        else if(a[i] == 50){
            if(cnt[25] == 0)    return 0;
            else{
                cnt[25]--;
                cnt[50]++;
            }
        }
        else{
            if(cnt[25] == 0 || cnt[25] + cnt[50] < 1)   return 0;
            if(cnt[50] != 0){
                cnt[25]--;
                cnt[50]++;
            }
            else cnt[25] -= 3;
        }
        if(cnt[25] >= 0 && cnt[50] >= 0)    return 1;
        return 0;
    }
}
int main(){
    int n ; cin >> n;
    Nhap(a,n);
    if(check(a,n))  cout <<"YES";
    else cout <<"NO";
}