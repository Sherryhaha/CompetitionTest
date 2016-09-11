//
// Created by sunguoyan on 16/9/11.
//

#ifndef COMPETITIONTEST_VERTICALBAR_H
#define COMPETITIONTEST_VERTICALBAR_H
#include<iostream>
#include<iomanip>
using namespace std;

class verticalBar{
private:
    int abc,de,x,y,z;
    int count;
public:
    void IsVerticalBar(char *s);
    bool IsInclude(char *A,char *B);
    void printVerticalBar();
};

#endif //COMPETITIONTEST_VERTICALBAR_H
