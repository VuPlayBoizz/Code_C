#include<bits/stdc++.h>
using namespace std;
long long Cnk(int n,int k){
	long long res = 1;
	for(int i = 1;i <= k;i++){
		res *= n-i+1; //tu
		res /= i;
	}
	return res;
}
int main(){
	int n;cin >> n;
	for(int i = 0;i < n;i++){
		for(int j = 0;j <= i;j++){
			cout << Cnk(i,j) << " ";
		}
		cout << endl;
	}
}