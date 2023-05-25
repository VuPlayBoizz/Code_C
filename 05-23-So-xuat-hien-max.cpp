#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    int t ; cin >> t ;
    while(t--){
        int n ; cin >> n ;
        int a[n];
        map<int, int> mp;
        for(int i = 0 ; i < n ; i ++){
            cin >> a[i];
            mp[a[i]]++;
        }
        int dem = INT_MIN;
        for(auto it : mp){
            if(dem <= it.second){
                dem = it.second;
            }    
        }
        for(auto it : mp){
            if(dem == it.second){
                cout << it.first << ' ';
                it.second = 0;                
            }
                 
        }
        cout << endl;        
    }
}