#include <iostream>
#include <queue>
using namespace std;

void showQueue(queue<int> q) {
    queue<int> aux = q;
    while(!(aux.empty())) {
        cout << aux.front() << " " << endl;
        aux.pop();
    }
}

void menu(queue<int> q){
    int option;
    bool status = true;
    while(status) {
        cout << "\n" << "***** MENU DE COLAS *****" << endl;
        cout << "1. Ingresar elemento a la cola" << endl;
        cout << "2. Eliminar elemento de la cola" << endl;
        cout << "3. Mostrar cola" << endl;
        cout << "4. Salir del programa" << endl;
        
        cout << "\n" << "Ingrese la opción que desea ejecutar: ";
        cin >> option;

        switch(option) {
            case 1:
                int element;

                cout << "Ingrese el número a agregar a la cola" << endl;
                cin >> element;

                q.push(element);
                break;
            case 2:
                q.pop();
                break;
            case 3:
                showQueue(q);
                break;
            case 4:
                cout << "Fin del programa" << endl;
                status = false;
                break;
            default:
                cout << "No es una opción" << endl;
                break;
        }
    }
}

int main() {
    queue<int> q;

    menu(q);
}