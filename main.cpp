#include <iostream>
#include "lib.h"

using namespace std;

int main() {
    int m;
    cin >> m;
    if (primo(m,m)){
        cout <<"numero primo";
    }
    else {
        cout <<"numero non primo";
    }
    return 0;
}
