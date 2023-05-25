//In ra số ngày của tháng
#include<bits/stdc++.h>
using namespace std;
bool Checkyear(int nam)
{
    return (((nam % 4 == 0) && (nam % 100 != 0)) || 
        (nam % 400 == 0)); 
}
int main(){
    int thang, nam;
    cin >> thang >> nam ;
    if(1<=thang&& thang<=12 && nam >0)
    {
        if(Checkyear(nam) ==true){
            switch (thang)
            {
            case 1 : cout<<"31"; break;
            case 2 : cout<<"29"; break;
            case 3 : cout<<"31"; break;
            case 4 : cout<<"30"; break;
            case 5 : cout<<"31"; break;
            case 6 : cout<<"30"; break;
            case 7 : cout<<"31"; break;
            case 8 : cout<<"31"; break;
            case 9 : cout<<"30"; break;
            case 10 : cout<<"31"; break;
            case 11 : cout<<"30"; break;
            case 12: cout<<"31"; break;
            }
        }
        else{
            switch(thang)
            {
            case 1 : cout<<"31"; break;
            case 2 : cout<<"28"; break;
            case 3 : cout<<"31"; break;
            case 4 : cout<<"30"; break;
            case 5 : cout<<"31"; break;
            case 6 : cout<<"30"; break;
            case 7 : cout<<"31"; break;
            case 8 : cout<<"31"; break;
            case 9 : cout<<"30"; break;
            case 10 : cout<<"31"; break;
            case 11 : cout<<"30"; break;
            case 12: cout<<"31"; break;
            }
        }
    }
    else cout << "INVALID";
}