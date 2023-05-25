//Có n quả táo và m cái hộp, tìm số cách chia n quả táo này vào m hộp sao cho hộp nào cũng có ít nhất 1 quả táo.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    long long A = 1,B = 1,C = 1;
    for(int i = 1; i <=n-1;i++)
    {
        A*=i;
    }
    for(int i = 1; i <=m-1;i++){
        B*=i;
    }
    for(int i =1 ; i<=n-m;i++){
        C*=i;
    }
    cout << A/(B*C);

}
/*Như vậy ở ngoài cùng luôn luôn là các vạch thẳng ñứng, còn lại m−1 vạch thẳng ñứng và n viên bi ñược
sắp xếp theo thứ tự tùy ý. Như vậy số cách sắp xếp khác nhau bằng số cách chọn n phần tử trong tập hợp
m n − +1 phần tử (cả vạch và ngôi sao) ñó chính là 1
n Cm n + − .
b) Trường hợp mỗi hộp có ít nhất 1 viên bi tương ứng với cách biểu diễn mỗi vạch phải bao gồm giữa hai
ngôi sao. Nhưng có tất cả n−1 khoảng trống giữa n ngôi sao. Vì vậy phải xếp m−1 vạch vào n−1 khoảng
trống ñó. Vậy có tất cả
1
1
m Cn
−
−
 cách xếp. */