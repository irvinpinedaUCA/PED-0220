#include <iostream>
#include <queue>
using namespace std;

<<<<<<< HEAD
void showQueue(queue<int> intQueue) {
    queue<int> aux = intQueue;
    while (!aux.empty()) {
        cout << aux.front() << endl;
        aux.pop();
    }
}

void menu(queue<int> intQueue) {
=======
void showQueue(queue<int> q) {
    queue<int> clone = q;
    while (!clone.empty()) {
        cout << clone.front() << endl;
        clone.pop();
    }
}

void menu(queue<int> q) {
>>>>>>> dcf7e3cc474c7e984982e8152b7a6e8f5d7959bf
    int option;
    bool status = true;
    while(status) {
        cout << "\n" << "***** MENU DE COLAS *****" << endl;
        cout << "1. Ingresar elementos a la cola" << endl;
        cout << "2. Borrar elementos de la cola" << endl;
<<<<<<< HEAD
        cout << "3. Mostrar todos los elementos de la cola" << endl;
        cout << "4. Salir del menu" << endl;

        cout << "\n" << "Ingrese la opción a ejecutar" << endl;
        cin >> option;

        switch (option) {
        case 1:
            int element;
            
            cout << "Ingrese un entero a la cola" << endl;
            cin >> element;

            intQueue.push(element);

            break;
        case 2:
            intQueue.pop();
            break;
        case 3:
            cout << "Mostrando cola" << endl;
            showQueue(intQueue);
            break;
        case 4:
            cout << "Fin del programa" << endl;
            status = false;
            break;
        default:
            cout << "Opción no válida" << endl;
            break;
=======
        cout << "3. Mostrar cola" << endl;
        cout << "4. Terminar el programa" << endl;

        cout << "\n" << "Ingrese la opción que desea ejecutar: ";
        cin >> option;

        switch(option) {
            case 1:
                int element;

                cout << "Ingrese el elemento a añadir a la cola" << endl;
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
                cout << "Opción no válida" << endl;
                break;
>>>>>>> dcf7e3cc474c7e984982e8152b7a6e8f5d7959bf
        }
    }
}

int main() {
    queue<int> intQueue;

    menu(intQueue);
}