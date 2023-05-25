
#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	getline(cin, s);
	for (int i = 0; i < s.size(); i++)
	{
		s[i] = tolower(s[i]);
	}
	stringstream ss(s);
	vector<string> v;
	map<string, int> mp;
	string tmp;
	while (ss >> tmp) v.push_back(tmp);
	for (int i = 0; i < v.size(); i++)
	{
		mp[v[i]] ++;
	}
	for (int i = 0; i < v.size(); i++)
	{
		if (mp[v[i]] != 0)
		{
			cout << v[i] << " " << mp[v[i]] << endl;
			mp.erase(v[i]);
		}
	}

}