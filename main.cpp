#include <iostream>
using namespace std;
#include <math.h>
int main() {
    int opzione;
    float a, b;
    cout<<"metti i valori di a e b"<<endl;
    cin>>a;
    cin>>b;
    cin>>opzione;
    switch (opzione) {
        case 0:
            cout<<"l'area del triangolo e\'"<< ( a * b ) / 2 <<endl;
            break;
        case 1:
            cout<<"l'area del quadrato e\'"<< pow(a, 2)<<endl;
            break;
        case 2:
            cout<<"l'area del rettangolo e\'"<< (a * b)<<endl;
            break;
        default:
            cout<< " opzione non valida "<<endl;
    }
    return 0;
}
