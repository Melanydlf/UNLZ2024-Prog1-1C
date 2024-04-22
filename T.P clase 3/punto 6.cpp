#include <iostream>
#include <string>

using namespace std;

int main () {
    float num1, num2;
    char operacion;

    cout << "ingrese el primer numero:";
    cin >> num1;
    
    cout << "ingrese el segundo numero:";
    cin >> num2;

    cout << "selecione la operacion que desea realizar ( + para suma, - para resta, * para multiplicacion, / para divison): ";
    cin >> operacion;

    switch (operacion) {
        case '+':
        cout << "el resultado de la suma es:" << num1 + num2 << endl;
        break;
        case '-':
        cout << "el resultado de la resta es:" << num1 - num2 << endl;
        break;
        case '*':
        cout << "el resultado de la multiplicacion es:" << num1 * num2 << endl;
        break;
        case '/':
            if (num2 != 0)
               cout << "el resultado de la division es:" << num1 / num2 << endl;
            else
                cout << "ERROR: No se puede dividir por cero." << endl;
        break;
        default:
        cout << "operacion no valida." << endl;
    }
}