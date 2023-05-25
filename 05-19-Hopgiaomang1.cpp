#include <bits/stdc++.h>
using namespace std;
using ll = long long;
// insert , erase, find, nlogn;
int main(){
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    set<int> hop,giao;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        hop.insert(a[i]);
    }
    for(int i = 0; i < m; i++){
        cin >> b[i];
        if(hop.find(b[i]) == hop.end())
        {
            hop.insert(b[i]);
        }
        else 
        {
            giao.insert(b[i]);
        }
    }
    for(auto x : hop)
    {
        cout << x << ' ';
    }
    cout << endl;
    for(auto x : giao)
    {
        cout << x << ' ';
    }
}