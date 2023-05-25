
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void buoi8_19(); // bài buổi 8 _ 19;

int main() {}

void buoi8_19() {
  int t;
  cin >> t;
  map<string, int> mp;
  cin.ignore();
  for (int i = 1; i <= t; i++) {
    string s;
    getline(cin, s);
    stringstream ss(s);
    string tmp;
    int kiemTra = 0;
    while (ss >> tmp) {
      mp[tmp]++;
      if (mp[tmp] == 2) {
        kiemTra = 1;
        cout << "#Test " << i << ": " << tmp << endl;
        break;
      }
    }
    if (kiemTra == 0)
      cout << "#Test " << i << ": -1" << endl;
    mp.erase(mp.begin(), mp.end());
  }
}