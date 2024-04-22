#include <iostream>
#include <string>

using namespace std;

int main () {
    
    int nro1, nro2, nro3;

    cout << "Ingrese el primer numero: ";
    cin >> nro1;

    cout << "Ingrese el segundo numero: ";
    cin >> nro2;

    cout << "Ingrse el tercer numero: ";
    cin >> nro3;

    int mayor = nro1;
    if ( nro2 > mayor) {
        mayor = nro2;
    }
    
    if (nro3 > mayor) {
        mayor = nro3;
    }

    cout << "el numero mayor es el: " << mayor << endl;

}
