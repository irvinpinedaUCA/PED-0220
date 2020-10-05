#include <iostream>
using namespace std;

void menu() {
    int option;
    bool status = true;
    while (status) {
        cout << "\n" << "***** MENU DE COLAS *****" << endl;
        cout << "1. Ingresar los elementos a la cola" << endl;
        cout << "2. Mostrar los elementos de la cola" << endl;
        cout << "3. Salir del programa" << endl;
        cout << "\n" << "Ingrese la opción que deseas ejectuar: ";
        cin >> option;
        cout << "\n";

        switch (option) {
            case 1:
                
                break;
            case 2:
                
                break;
            case 3:
                cout << "Fin del programa" << endl;
                status = false;
                break;
            default:
                cout << "Esta no es una opción válida" << endl;
                break;
        }
    }
}

int main() {
    
}