#include <iostream>
using namespace std;

float raiz(int, float, int);

int main() {
    int n;
    float r;

    cout << "Ingrese el numero al cual se le quiere calcular la raiz: ";
    cin >> n;

    cout << "Ingrese el valor semilla: ";
    cin >> r;

    int cont = 0;

    cout << raiz(n, r, cont) << endl;
}

float raiz(int n, float r, int cont) {
    cont++;
    cout << "\n" << "Ejecucion #" << cont << endl;
    float a = r;
    r = ((n/r)+r)/2;
    cout << r << " - " << a << endl;
    if (abs(r-a) < 0.0000001)
    {
        return r;
    }else {
        return raiz(n, r, cont);
    }  
}