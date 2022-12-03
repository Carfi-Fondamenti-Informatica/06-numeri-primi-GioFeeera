#include "lib.h"
int primo (int m, int n){
    bool x=true;
    if (m!=1){
        if ((n % m) !=0) {
            m--;
            x = primo(m,n);
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
