#include <iostream>
#include "lib.h"

using namespace std;

int main() {
    int n=0;
    int m= (n-1);
    cout <<"inserisci un numero "; cin >> n;
    if (primo (m, n)==true){
        cout << "numero primo"<<endl;
    }
    else if (primo (m, n)==false){
        cout << "numero non primo" << endl;
    }

    return 0;
}
