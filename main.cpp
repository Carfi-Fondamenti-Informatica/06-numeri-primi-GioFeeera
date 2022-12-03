#include <iostream>
#include "lib.h"

using namespace std;

int main() {
    int n=0;
    cout <<"inserisci un numero "; cin >> n;
    int m= (n-1);
    if (primo (n, m)==true){
        cout << "numero primo"<<endl;
    }
    else if (primo (n, m)==false){
        cout << "numero non primo" << endl;
    }

    return 0;
}
