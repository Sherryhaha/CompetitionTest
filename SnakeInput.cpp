//
// Created by sunguoyan on 16/9/6.
// 蛇形填数，在n*n的方阵里面填入1~n*n，n<=8
//

#include<iostream>
#define maxn 10
int a[maxn][maxn];

using namespace std;

int main()
{
    int n,i,j,num,first,x,y;
    cin>>n;
    memset(a,0,sizeof(a));
    num = a[x=0][y=(n-1)]=1;
    while(num<n*n) {
        while (x < n - 1 && a[x+1][y] == 0) {
            a[++x][y] = ++num;
        }
        while (y -1>= 0 && a[x][y-1] == 0) {
            a[x][--y] = ++num;
        }
        while (x -1>= 0 && a[x-1][y] == 0) {
            a[--x][y] = ++num;
        }
        while (y < n - 1 && a[x][y+1] == 0) {
            a[x][++y] = ++num;
        }
    }
    for(i = 0;i<n;i++){
        first = 1;
        for(j=0;j<n;j++){
            if(first){
                cout<<a[i][j];
                first = 0;
            }else{
                cout<<" "<<a[i][j];
            }

        }
        cout<<endl;
    }
    return 0;

}

