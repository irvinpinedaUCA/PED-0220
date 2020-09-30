#include <iostream>
#include <queue>
using namespace std;

struct Pairs{
    int num1;
    int num2;
};
struct Pairs pairs;

void showQueue(queue<Pairs> pairsQueue) {
    queue<Pairs> aux = pairsQueue;
<<<<<<< HEAD
    while(!aux.empty()) {
        cout << "(" << aux.front().num1 << "," << aux.front().num2 << ")" << endl;
=======
    while (!aux.empty()) {
        cout << "[" << aux.front().num1 << "," << aux.front().num2 << "]" << endl;
>>>>>>> dcf7e3cc474c7e984982e8152b7a6e8f5d7959bf
        aux.pop();
    }
}

void menu(queue<Pairs> pairsQueue) {
    int option;
    bool status = true;
    while(status) {
        cout << "\n" << "***** MENU DE COLAS *****" << endl;
        cout << "1. Ingresar pares a la cola" << endl;
<<<<<<< HEAD
        cout << "2. Mostrar pares en la Cola" << endl;
        cout << "3. Salir del menu" << endl;

        cout << "\n" << "Ingrese la opción a ejecutar" << endl;
        cin >> option;

        switch(option) {
=======
        cout << "2. Mostrar los pares en la cola" << endl;
        cout << "3. Salir del menu" << endl;

        cout << "\n" << "Ingrese la opción que desea ejecutar: ";
        cin >> option;

        switch(option){
>>>>>>> dcf7e3cc474c7e984982e8152b7a6e8f5d7959bf
            case 1:
                cout << "Ingrese el primer numero: ";
                cin >> pairs.num1;
                cout << "Ingrese el segundo numero: ";
                cin >> pairs.num2;

                pairsQueue.push(pairs);
                break;
            case 2:
                showQueue(pairsQueue);
                break;
<<<<<<< HEAD
            case 3: 
=======
            case 3:
>>>>>>> dcf7e3cc474c7e984982e8152b7a6e8f5d7959bf
                cout << "Fin del programa" << endl;
                status = false;
                break;
            default:
<<<<<<< HEAD
                cout << "Opcion no valida" << endl;
=======
                cout << "Opción no válida" << endl;
>>>>>>> dcf7e3cc474c7e984982e8152b7a6e8f5d7959bf
                break;
        }
    }
}
<<<<<<< HEAD

int main() {
    queue<Pairs> pairQueue;

    menu(pairQueue);
=======


int main() {
    queue<Pairs> pairsQueue;

    menu(pairsQueue);
>>>>>>> dcf7e3cc474c7e984982e8152b7a6e8f5d7959bf
}