#include <iostream>
using namespace std;

int main()
{
    int num = 5;
    int *p = &num;

    cout << "Valor sin modificar: " << *p << endl;
    cout << "Ubicación del valor: " << p << endl;

    *p = 50;

    cout << "Valor modificado ocupando punteros: " << *p << endl;
    cout << "Ubicación del valor: " << p << endl;
    
    return 0;
}
