#include <iostream>
#include <queue>
using namespace std;

struct Client {
    string name;
    string last;
    int payment;
};
struct Client client;

void charge(queue<Client> clientQueue, int amount) {
    while (!clientQueue.empty()) {
        amount += clientQueue.front().payment;
        clientQueue.pop();
    }
    cout << "Se ha cobrado un total de: $" << amount << " a los clientes" << endl;
}

void menu(queue<Client> clientQueue, int amount){
    int option;
    bool status = true;
    while(status) {
        cout << "\n" << "***** MENU DE COLAS *****" << endl;
        cout << "1. Ingresar cliente a la cola" << endl;
        cout << "2. Cobrar" << endl;
        cout << "3. Salir del programa" << endl;
        
        
        cout << "\n" << "Ingrese la opción que desea ejecutar: ";
        cin >> option;

        switch(option) {
            case 1:
                cout << "Ingrese el nombre de la persona: ";
                cin >> client.name;
                cout << "Ingrese el apellido de la persona: ";
                cin >> client.last;
                cout << "Ingrese el monto de pago de la persona: ";
                cin >> client.payment;

                clientQueue.push(client);
                break;
            case 2:
                charge(clientQueue, amount);
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

int main(){
    queue<Client> clientQueue;

    int amountPaid = 0;

    menu(clientQueue, amountPaid);
}