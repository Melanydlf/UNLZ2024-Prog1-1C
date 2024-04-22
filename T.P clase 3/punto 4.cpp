#include <iostream>
#include <string>

using namespace std;

int main () {
    int nroDeDia;

    cout << "Ingrese un numero del 1 al 7: ";
    cin >> nroDeDia;

    switch (nroDeDia) {
        case 1:
        cout << "lunes" << endl;
        break;
        case 2:
        cout << "martes" << endl;
        break;
        case 3:
        cout << "miercoles" << endl;
        break;
        case 4:
        cout << "jueves" << endl;
        break;
        case 5:
        cout << "viernes" << endl;
        break;
        case 6:
        cout << "sabado" << endl;
        break;
        case 7:
        cout << "domingo" << endl;
        break;
        default:
        cout << "numero invalido. Por favor ingrese un numero del 1 al 7." << endl;
        break;
    }
}