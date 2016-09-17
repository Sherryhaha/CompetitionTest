//
// Created by sunguoyan on 16/9/17.
// set的特性，set中的元素是排好序并且不重复的
//
#include <iostream>
#include <sstream>
#include <string>
#include <set>

using namespace std;

set<string> dict;

int main(){
    string s,buf;
    int flag = 1;
    while(cin>>s){
        for(int i=0;i < s.length();i++){
            if(s[i]=='$') flag = 0;
            if(isalpha(s[i])) s[i] = tolower(s[i]); else s[i] = ' ';
        }
        stringstream ss(s);
        while(ss>>buf) dict.insert(buf);
        if(flag ==0 ) break;
    }

    for(set<string>::iterator it=dict.begin();it!=dict.end();++it){
        cout<<*it<<endl;
    }
    return 0;
}
