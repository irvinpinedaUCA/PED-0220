#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    cout << "Ingrese el valor del primer número entero: ";
    cin >> num1;
    cout << "Ingrese el valor del segundo número entero: ";
    cin >> num2;

    int *p1 = &num1, *p2 = &num2;

    cout << "\n" << "Valores de las variales" << endl;
    cout << "Valor del primer número: " << *p1 << endl;
    cout << "Valor del segundo número: " << *p2 << endl;

    cout << "\n" << "Direcciones de las variables" << endl;
    cout << "Valor del primer número: " << p1 << endl;
    cout << "Valor del segundo número: " << p2 << endl;
    
    return 0;
}
