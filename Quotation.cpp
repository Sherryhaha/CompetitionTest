//
// Created by sunguoyan on 16/9/11.
//

#include<iostream>
using namespace std;

int main(){
    int s;
    bool flag=true;
    while((s=getchar())!=EOF){
        if(s=='"'){
            if(flag){
                cout<<"“";
                flag = false;
            }else{
                cout<<"”";
                flag = true;
            }
        }else{
            cout<<(char)s;
        }
    }
}