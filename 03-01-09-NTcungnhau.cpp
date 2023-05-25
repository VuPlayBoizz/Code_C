#include<bits/stdc++.h>
using namespace std;
int Check(int i,int j){
    while(i!=j){
        if(i>j){
            i = i - j;
        }
        else    j = j - i;
    }
    if(i == 1)  return 1;
    else return 0;
}
int main(){
    int a,b; cin >> a >> b;
    for(int i = a ; i < b ; i++){
        for(int j = a+1; j <=b;j++ ){
            if(Check(i,j)&& i < j)  cout << "(" << i << "," << j << ")" << endl;
        }
    }
}