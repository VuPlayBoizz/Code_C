#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
        int n = 0;
        int chan = 0, le = 0;
        char kitu =' ';
        while(kitu == ' '){
            int x; cin >> x;
            n++;
            if(x % 2 == 0)  chan++;
            else    le++;
            kitu = getchar();
        }
        if(((n % 2)  == 0 && chan > le ) || ((n % 2) == 1 && chan < le))    cout << "YES";
        else    cout << "NO";
        cout << endl;
}