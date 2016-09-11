//
// Created by sunguoyan on 16/9/11.
//

#include "VerticalBar.h"
void verticalBar::IsVerticalBar(char *s) {
    char buf[99];
    bool flag;
    flag = true;
    count = 0;
    for(abc=111;abc<=999;abc++){
        for(de=11;de<=99;de++){
            x = abc*(de%10);
            y = abc*(de/10);
            z = abc*de;
            sprintf(buf,"%d%d%d%d%d",abc,de,x,y,z);
            flag = IsInclude(s,buf);
            if(flag){
                count++;
                printVerticalBar();
            }

        }
    }
    cout<<"The number of solution is:"<<count<<endl;
}

bool verticalBar::IsInclude(char *A, char *B) {
    bool flag = true;
    int i = 0;
    for(i=0;i<strlen(B);i++){
        if(strchr(A,B[i])==NULL){
            flag = false;
        }
    }

    return flag;
}

void verticalBar::printVerticalBar() {
    cout<<"<"<<count<<">"<<endl;
    cout<<setw(5)<<abc<<endl;
    cout<<"X"<<setw(4)<<de<<endl;
    cout<<"-----"<<endl;
    cout<<setw(5)<<x<<endl;
    cout<<setw(5)<<y<<endl;
    cout<<"-----"<<endl;
    cout<<setw(5)<<z<<endl;
    cout<<endl;
}

int main(){
    verticalBar A;
    char s[20];
    cin>>s;
    A.IsVerticalBar(s);
    return 0;
}