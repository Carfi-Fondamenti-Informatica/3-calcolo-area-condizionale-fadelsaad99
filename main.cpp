#include <iostream>
using namespace std;
#include <math.h>
int main() {
    int opzione;
    float a, b;
    cout<<"metti i valori di a e b"<<endl;
    cin>>a;
    cin>>b;
    switch (opzione) {
        case 0:
            cout<< ( a * b ) / 2 <<endl;
            break;
        case 1:
            cout<< pow(a, 2)<<endl;
            break;
        case 2:
            cout<< (a * b)<<endl;
            break;
        default:
            cout<< " opzione non valida "<<endl;
    }
    return 0;
}
