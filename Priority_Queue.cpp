//
// Created by sunguoyan on 16/9/17.
// 对于优先队列的测试,寻找丑数（丑数就是不能被2,3,5以外的其他素数整除的数），输出第1500个丑数
//

#include <iostream>
#include <queue>
#include <set>
#include <vector>

using namespace std;
typedef long long LL;
const int coeff[3]={2,3,5};

int main(){
    priority_queue< LL,vector<LL>,greater<LL> > pq;
    set<LL> s;
    pq.push(1);
    s.insert(1);
    for(int i=1;;i++){
        LL x=pq.top();
        pq.pop();
        if(i==1500){
            cout<<"the 1500'th ugly number is: "<<x<<endl;
            break;
        }
        for(int j = 0; j <3;j++){
            LL x2 = x*coeff[j];
            if(!s.count(x2)){
                s.insert(x2);
                pq.push(x2);
            }
        }
    }
    return 0;
}