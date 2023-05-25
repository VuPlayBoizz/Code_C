#include<bits/stdc++.h>
using namespace std;

void init(long long n){
	if(n != 0){
		cout << n;
		return;
	}
	else
	cout << n / 10;
	init(n / 10);
}
int main(){
	long long n; cin >> n;
	init (n);
}
