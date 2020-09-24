#include <iostream>
using namespace std;

struct Node {
    int element;
    struct Node *next;
};
typedef struct Node *Stack;

void menu() {
    int option;
    bool status = true;
    while (status)
    {
        cout << "\n" << "***** MENU DE PILAS *****" << endl;
        cout << "1. Ingresar elemento a la pila" << endl;
        cout << "2. Eliminar elemento de la pila" << endl;
        cout << "3. Salir del menu" << endl;
        cout << "\n" << "Ingrese la opción que deseas ejectuar: ";
        cin >> option;
        cout << "\n";

        switch (option)
        {
            case 1:
                
                break;
            case 2:
                
                break;
            case 3:
                cout << "Fin del programa" << endl;
                status = false;
                break;
            default:
                break;
        }
    }
}

int main() {

    return 0;
}