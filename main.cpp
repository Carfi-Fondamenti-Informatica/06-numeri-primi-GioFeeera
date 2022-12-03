#include "lib.h"
using namespace std;


int main() {
    int n=0;
    int m= (n-1);
    cout <<"inserisci un numero "; cin >> n;
    if (numprimo (m,n)==true){
        cout << "numero primo"<<endl;
    }
    else if (numprimo(m,n)==false){
        cout << "numero non primo" << endl;
    }

    return 0;
}
