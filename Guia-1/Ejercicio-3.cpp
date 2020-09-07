#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Ingrese un valor entero: ";
    cin >> num;

    int *p = &num;

    cout << "\n" << "Mostrando los valores" << endl;
    cout << "Mostrando valor: " << num << endl;
    cout << "Mostrando valor utilizando punteros: " << *p << endl;

    return 0;
}