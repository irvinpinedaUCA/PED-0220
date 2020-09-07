#include <iostream>
using namespace std;

int main() {
    int n;
    int max = 0;

    cout << "Ingrese el tamaño de la lista de números: ";
    cin >> n;

    int array[n];
    int *pMax = &max;

    cout << "\n" << "Ingresando valores en el arreglo" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Valor en la posición [" << i << "]: ";
        cin >> array[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (array[i] > max) {
            max = array[i];
        }
    }
    
    cout << "\n" << "Resultado" << endl;
    cout << "El mayor valor dentro del arreglo es: " << *pMax << endl;

    return 0;
}