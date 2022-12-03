#include "lib.h"
int numprimo(int m, int n){
    bool x=true;
    if (m=!1){
        if ((n % m) !=0) {
            m--;
            x = numprimo(m,n);
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
