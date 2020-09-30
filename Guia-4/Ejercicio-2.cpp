#include <iostream>
#include <queue>
using namespace std;

struct Client {
<<<<<<< HEAD
    string nombre;
    string apellido;
    int pago;
=======
    string name;
    string last;
    int payment;
>>>>>>> dcf7e3cc474c7e984982e8152b7a6e8f5d7959bf
};
struct Client client;

void charge(queue<Client> clientQueue, int amount) {
<<<<<<< HEAD
    queue<Client> aux = clientQueue;
    while (!aux.empty()) {
        amount += aux.front().pago;
        aux.pop();
    }

    cout << "Se ha cobrado $" << amount << " a los clientes" << endl;
}

void menu(queue<Client> clientQueue, int paidAmount) {
=======
    while (!clientQueue.empty()) {
        amount += clientQueue.front().payment;
        clientQueue.pop();
    }

    cout << "Se le ha cobrado un total de $" << amount << " a los clientes" << endl;
}

void menu(queue<Client> clientQueue, int amountPaid) {
>>>>>>> dcf7e3cc474c7e984982e8152b7a6e8f5d7959bf
    int option;
    bool status = true;
    while(status) {
        cout << "\n" << "***** MENU DE COLAS *****" << endl;
        cout << "1. Ingresar clientes a la cola" << endl;
        cout << "2. Cobrar" << endl;
        cout << "3. Salir del menu" << endl;

<<<<<<< HEAD
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
=======
        cout << "\n" << "Ingrese la opción que desea ejecutar: ";
        cin >> option;

        switch(option){
            case 1:
                cout << "Ingrese el nombre del cliente: ";
                cin >> client.name;
                cout << "Ingrese el apellido del cliente: ";
                cin >> client.last;
                cout << "Ingrese el monto de pago de la persona: ";
                cin >> client.payment;
>>>>>>> dcf7e3cc474c7e984982e8152b7a6e8f5d7959bf

                clientQueue.push(client);
                break;
            case 2:
<<<<<<< HEAD
                charge(clientQueue, paidAmount);
=======
                charge(clientQueue, amountPaid);
>>>>>>> dcf7e3cc474c7e984982e8152b7a6e8f5d7959bf
                break;
            case 3:
                cout << "Fin del programa" << endl;
                status = false;
<<<<<<< HEAD
            default:
                cout << "Opcion no válida" << endl;
=======
                break;
            default:
                cout << "Opción no válida" << endl;
>>>>>>> dcf7e3cc474c7e984982e8152b7a6e8f5d7959bf
                break;
        }
    }
}

int main(){
    queue<Client> clientQueue;

<<<<<<< HEAD
    int paidAmount = 0;

    menu(clientQueue, paidAmount);
=======
    int amountPaid = 0;

    menu(clientQueue, amountPaid);

>>>>>>> dcf7e3cc474c7e984982e8152b7a6e8f5d7959bf
}