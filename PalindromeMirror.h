//
// Created by sunguoyan on 16/9/11.
//

#ifndef COMPETITIONTEST_PALINDROMEMIRROR_H
#define COMPETITIONTEST_PALINDROMEMIRROR_H

#include <iostream>
#include <string>
#include <ctype.h>
using namespace std;

class PalinMirror{
private:
    const string rev="A   3  HIL JM O   2TUVWXY51SE Z  8 ";
    const string msg[4] = {" not a palindrome"," a regular palindrome"," a mirror"," a mirror palindrome"};
public:
    char getMirror(char ch);
    void ISpm(string s);
};

#endif //COMPETITIONTEST_PALINDROMEMIRROR_H
