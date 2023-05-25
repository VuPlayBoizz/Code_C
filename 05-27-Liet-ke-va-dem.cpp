#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool checkInc(int n)
{
    int last = INT_MAX;
    while(n)
    {
        if(last > n % 10)
        {
            last = n % 10;
        }
        else
            return false;
        n /= 10;
    }
    return true;
}
bool cmp(pair<int,int> a, pair<int,int> b)
{
    return a.second > b.second;
}
int main(){
    string s;
    getline(cin, s);
    stringstream ss(s);
    string tmp;
    vector<int> v;
    while(ss >> tmp)
    {
        int val = stoi(tmp);
        v.push_back(val);
    }
    
    map<int, int> mp;
    for(auto x : v)
    {
        if(checkInc(x))
            mp[x]++;
    }

    vector<pair<int, int>> vtmp;
    for (auto x : mp)
    {
        if(x.second != 0)
            vtmp.push_back(x);
    }
    
    sort(vtmp.begin(), vtmp.end(), cmp);
    for(auto x : vtmp)
    {
        cout << x.first << ' ' << x.second << endl;
    }
}