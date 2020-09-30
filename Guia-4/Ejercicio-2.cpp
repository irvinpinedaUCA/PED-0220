#include <iostream>
#include <queue>
using namespace std;

struct Client {
    string nombre;
    string apellido;
    int pago;
};
struct Client client;

void charge(queue<Client> clientQueue, int amount) {
    queue<Client> aux = clientQueue;
    while (!aux.empty()) {
        amount += aux.front().pago;
        aux.pop();
    }

    cout << "Se ha cobrado $" << amount << " a los clientes" << endl;
}

void menu(queue<Client> clientQueue, int paidAmount) {
    int option;
    bool status = true;
    while(status) {
        cout << "\n" << "***** MENU DE COLAS *****" << endl;
        cout << "1. Ingresar clientes a la cola" << endl;
        cout << "2. Cobrar" << endl;
        cout << "3. Salir del menu" << endl;

        cout << "\n" << "Ingrese la opción a ejecutar" << endl;
        cin >> option;

        switch(option) {
            case 1:
                cout << "Ingrese el nombre del cliente: ";
                cin >> client.nombre;
                cout << "Ingrese el apellido del cliente: ";
                cin >> client.apellido;
                cout << "Ingrese el monto a pagar: ";
                cin >> client.pago;

                clientQueue.push(client);
                break;
            case 2:
                charge(clientQueue, paidAmount);
                break;
            case 3:
                cout << "Fin del programa" << endl;
                status = false;
            default:
                cout << "Opcion no válida" << endl;
                break;
        }
    }
}

int main(){
    queue<Client> clientQueue;

    int paidAmount = 0;

    menu(clientQueue, paidAmount);
}