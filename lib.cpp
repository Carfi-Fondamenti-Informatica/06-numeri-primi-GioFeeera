#include "lib.h"
int primo (int n, int m){
    bool x=true;
    if (m!=1){
        if ((n % m) !=0) {
            m--;
            x = primo(n,m);
        }
        else {
            x= false;
        }
    }
    else {
        x = true;
    }

    return x;
}
