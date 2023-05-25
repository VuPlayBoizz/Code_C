#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t ; cin >> t;
    while(t--){
        int n ; cin >> n;
        int a[n];
        int cnt[30001] = {0};
        for(int i = 0; i < n; i++){
            cin >> a[i];
            cnt[a[i]]++;
        }
        int dem = INT_MIN;
        for(int i = 0; i < n; i++){
            if(dem <= cnt[a[i]]){
                dem = cnt[a[i]];
            }
        }
        for(int i = 0; i < n; i++){
            if(dem == cnt[a[i]]){
                cout << a[i] << ' ';
                cnt[a[i]] = 0;
            }
        }
        cout << endl;
    }
}