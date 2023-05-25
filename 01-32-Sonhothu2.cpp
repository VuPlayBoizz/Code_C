//Cho 5 số nguyên a,b,c,d,e - 64 bit đôi một khác nhau. In ra số nhỏ thứ nhì.
#include<bits/stdc++.h>
using namespace std;
int main(){
	long long a , b , c , d , e;
	cin >> a >> b >>c >>d >>e;
	if(min({a,b,c,d,e})== a ){
		cout << min({b,c,d,e});}
	
	else if (min({a,b,c,d,e})==b){
		cout << min({a,c,d,e});
	}
	else if (min({a,b,c,d,e})==c){
		cout << min({a,b,d,e});
	}
	else if (min({a,b,c,d,e})==d){
		cout << min({a,b,c,e});
		
	}
	else if (min({a,b,c,d,e})==e){
		cout << min ({a,b,c,d});
	}
}