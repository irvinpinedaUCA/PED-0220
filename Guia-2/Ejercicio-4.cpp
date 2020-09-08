#include <iostream>
using namespace std;

int raizDigital(int);

int main() {
    int num;

    cout << "Ingrese un numero (NO NEGATIVO): ";
    cin >> num;

    raizDigital(num);
}

int raizDigital(int num) {
    int aux, suma = 0;
    if (num < 10)
    {
        return num;
    }else {
        while (num > 0)
        {
            suma = suma + num%10;
            num = num/10;
        }
        cout << "La suma es: " << suma << endl;
        return raizDigital(suma);
    }
}