//
// Created by sunguoyan on 16/9/11.
//

#include "PalindromeMirror.h"

char PalinMirror::getMirror(char ch) {
    if (isalpha(ch)) {
        return rev[ch - 'A'];
    } else {
        return rev[ch - '0' + 25];
    }
}

void PalinMirror::ISpm(string s) {
    int i, L;
    int p = 1, m = 1;
    L = s.length();
    for (i = 0; i < (L + 1) / 2; i++) {
        if (getMirror(s[i]) != s[L - i - 1]) m = 0;
        if (s[i] != s[L - 1 - i]) p = 0;
    }
    cout<<s<<"is"<<msg[m*2+p]<<endl;
}

int main(){
    PalinMirror P;
    string s;
    while(cin>>s){
        P.ISpm(s);
    }
    return 0;
}