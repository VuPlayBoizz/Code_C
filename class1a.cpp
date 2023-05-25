#include<iostream>
#include<string>
#include<sstream> 
#include<vector>
#include<iomanip>
using namespace std;
class Sv {
private:
	 string ten,ma,lop,ns;
	 double gpa;
public:
	Sv(){}
	Sv(string ma, string ten, string lop, string ns,double gpa) {
		this->ma = ma;
		this->ten = ten;
		this->lop = lop;
		this->ns = ns;
		this->gpa = gpa;
	}
	void in() {
		cout << this->ma << " " << this->ten << " " << this->lop << " " << this->ns << " " <<fixed<<setprecision(2)<< this->gpa << endl;
	}

};
string chuanhoans(string s) {
	if (s[1] == '/')s = '0' + s;
	if (s[4] == '/')s.insert(3, "0");
	return s;
}
void chuanhoa(string& s) {
	s[0] = toupper(s[0]);
	for (int i = 1; i < s.size(); i++) {
		s[i] = tolower(s[i]);
	}
}
string chuanhoa1(string s) {
	string s2 = "";
	stringstream ss(s);
	string tmp;
	vector<string> v;
	while (ss >> tmp) {
		v.push_back(tmp);
	}
	for (int i = 0; i < v.size(); i++) {
		chuanhoa(v[i]);
		s2 += v[i] + " ";
	}
	return s2;
}
int main() {
	int n;
	cin >> n;
	cin.ignore();
	vector<Sv> sv;
	for (int i = 0; i < n; i++) {
		string ma, ten, lop, ns;
		double gpa;
		cin >> ma;
		cin.ignore();
		getline(cin, ten);
		cin >> lop >> ns >> gpa;
		ns = chuanhoans(ns);
		ten = chuanhoa1(ten);
		Sv x(ma, ten, lop, ns, gpa);
		sv.push_back(x);
	}
	for (Sv x : sv) {
		x.in();
	}
}
