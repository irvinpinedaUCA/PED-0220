#include <iostream>
using namespace std;

float raiz(float, float, int);

int main() {
    float n;
    cout << "Ingrese un entero positivo: ";
    cin >> n;

    float r;

    cout << "Ingrese el valor semilla: ";
    cin >> r;

    int cont = 0;

    cout << "La raiz cuadrada es " << raiz(n, r, cont) << endl;
}

float raiz(float n, float siguiente, int cont) {
    cont++;
    cout << cont << endl;
    float anterior = siguiente;
    siguiente = ((n/siguiente)+siguiente)/2;
    if (anterior - siguiente < 0.000000001) {
        return siguiente;
    }else {
        return raiz(n, siguiente, cont);
    }
}