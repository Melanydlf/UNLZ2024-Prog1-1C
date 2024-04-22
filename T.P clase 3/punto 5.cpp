#include <iostream>
#include <string>

using namespace std;

int main () {
    char caracter;

    cout << "ingrese un caracter:";
    cin >> caracter;

    if ( caracter == 'a' || caracter == 'e' || caracter == 'i' || caracter == 'o' || caracter == 'u') {
        cout << "el caracter ingresado es una vocal." << endl;
    }
    else if (caracter >= 'a' && caracter <= 'z') {
        cout << "El caracter ingresado es una consonante:" << endl;
    }
    else {
        cout << "El caracter ingresado no es una letra" << endl;
    }
}