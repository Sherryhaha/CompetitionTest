//
// Created by sunguoyan on 16/9/6.
//  开灯问题，有n盏灯，编号为1~n,第一个人把所有灯打开，第二个人将所有编号为2的倍数的灯按下（这些灯将会被关闭）。
// 第三个人按下所有编号为3的倍数的开关（开着的灯将会被关掉，关着的灯将会被打开），以此类推，一共k个人，问最后那些灯开着？
// 输入n和k，输出开着的灯的编号，k<=n<=1000
//

#include<iostream>
using namespace std;
#define maxn 1010
int a[maxn];            //数组里面的每一个元素，0值代表灯关着，1值代表灯开着，数组的编号代表着灯的编号。

 int main(){
     int n,k,i,j,first;
     cin>>n;
     cin>>k;

     memset(a,0,sizeof(a));

     for(i=1;i<k+1;i++){
         for(j=1;j<n+1;j++){
             if(j%i==0){
                 if(a[j]==0){
                     a[j]=1;
                 }else{
                     a[j]=0;
                 }
             }
         }
     }
     first = 1;
     for(i = 1;i<n+1;i++){
         if(a[i]==1){
             if(first){
                 cout<<i;
                 first = 0;
             }else{
                 cout<<" "<<i;
             }
         }
     }

     return 0;
 }

