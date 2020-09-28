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
    bool found = false;
    while (!charQueue.empty()) {
        cout << charQueue.front() << endl;
        if (charQueue.front() == c) {
            found = true;

            cout << "\n" << "Se encontró el caracter en la cola, borrando cola..." << endl;
            while (!charQueue.empty()) {
                charQueue.pop();
            }

            cout << "Mostrando cola vaciada" << endl;
            showQueue(charQueue);

            return;
        }else {
            charQueue.pop();
        }
    }
    if (!found) {
        cout << "No se encontró el caracter" << endl;
    }
}

void menu(queue<char> charQueue){
    int option;
    bool status = true;
    while(status) {
        cout << "\n" << "***** MENU DE COLAS *****" << endl;
        cout << "1. Ingresar caracteres a la cola" << endl;
        cout << "2. Buscar caracter y vaciar" << endl;
        cout << "3. Salir del programa" << endl;
        
        
        cout << "\n" << "Ingrese la opción que desea ejecutar: ";
        cin >> option;

        switch(option) {
            case 1:
                char c;
                cout << "\n" << "Ingrese un caracter para la Cola: ";
                cin >> c;

                charQueue.push(c);
                
                break;
            case 2:
                char cS;

                showQueue(charQueue);

                cout << "Ingrese el caracter que desea buscar dentro de la cola" << endl;
                cin >> cS;

                searchChar(charQueue, cS);

                break;
            case 3:
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
    queue<char> charQueue;

    menu(charQueue);
}