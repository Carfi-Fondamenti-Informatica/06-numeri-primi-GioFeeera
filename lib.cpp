#include <iostream> 
#include "lib.h"
bool primo (int m, int n) {
    m =abs(m);
    n = abs(n);
    if (m == 0 || n == 0)
        return false;
    int rest = m % --n;
    if (rest == 0 && n > 1) {
        return false;
    } else if (n != 1)
        return primo(m, n);
    else
        return true;
}
