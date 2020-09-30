#include <iostream>
#include <queue>
using namespace std;

void showQueue(queue<char> charQueue) {
    queue<char> aux = charQueue;
    while (!aux.empty()) {
        cout << aux.front() << " ";
        aux.pop();
    }
}

void searchChar(queue<char> charQueue, char c) {
    queue<char> aux = charQueue;
    bool found = false;

    while(!aux.empty()) {
        cout << "Caracter actual: " << aux.front() << endl;
        if(aux.front() == c) {
            found = true;
            cout << "Se encontró el caracter, borrando cola..." << endl;
            aux.pop();

            while(!charQueue.empty()){
                charQueue.pop();
            }

            cout << "Mostrando cola vaciada" << endl;
            showQueue(charQueue);
            return;
        }else {
            aux.pop();
        }
    }
    if (!found) {
        cout << "No se encontro el caracter dentro de la cola" << endl;
    }
}

void menu(queue<char> charQueue) {
    int option;
    bool status = true;
    while(status) {
        cout << "\n" << "***** MENU DE COLAS *****" << endl;
        cout << "1. Ingresar elementos a la cola" << endl;
        cout << "2. Buscar caracter en la cola" << endl;
        cout << "3. Salir del menu" << endl;

        cout << "\n" << "Ingrese la opción a ejecutar" << endl;
        cin >> option;

        switch(option) {
            case 1:
                char c;

                cout << "Ingrese un caracter a la cola: " << endl;
                cin >> c;

                charQueue.push(c);
                break;
            case 2:
                char cS;

                cout << "Ingrese un caracter en especifico: ";
                cin >> cS;

                cout << "Mostrando cola original" << endl;
                showQueue(charQueue);
                cout << endl;

                searchChar(charQueue, cS);
                break;
            case 3:
                cout << "Fin del programa" << endl;
                status = false;
                break;
            default:
                cout << "No es opción válida" << endl;
                break;
        }
    }
}

int main() {
    queue<char> charQueue;

    menu(charQueue);
}