#include <iostream>
#include <queue>
using namespace std;

struct Student {
    string name;
    int id;
    float average;
};
struct Student student;

void findStudentByName(queue<Student> studentQueue, string name) {
    queue<Student> aux = studentQueue;
    cout << aux.front().name << endl;
    if (aux.front().name == name) {
        cout << "Se encontró al estudiante" << endl;
    }else {
        aux.pop();
        findStudentByName(aux, name);
    }
}

void findStudentById(queue<Student> studentQueue, int id) {
    queue<Student> aux = studentQueue;
    cout << aux.front().id << endl;
    if (aux.front().id == id)
    {
        cout << "Se encontró al estudiante" << endl;
    }else {
        aux.pop();
        findStudentById(aux, id);
    }
}

void menu(queue<Student> studentQueue) {
    string name;
    int option;
    bool status = true;
    while (status) {
        cout << "\n" << "***** MENU DE COLAS *****" << endl;
        cout << "1. Ingrese un estudiante a la cola" << endl;
        cout << "2. Buscar al estudiante por nombre" << endl;
        cout << "3. Buscar al estudiante por carnet" << endl;
        cout << "4. Salir del programa" << endl;

        cout << "\n" << "Ingrese la opción que desea ejecutar: ";
        cin >> option;

        switch (option) {
            case 1:
                cout << "INGRESANDO ESTUDIANTE" << endl;
                cout << "Ingrese el nombre: ";
                cin >> student.name;
                cout << "Ingrese el id (carnet) del estudiante: ";
                cin >> student.id;
                cout << "Ingrese el promedio del estudiante: ";
                cin >> student.average;

                studentQueue.push(student);
                break;
            case 2:
                cout << "Buscando estudiante por nombre" << endl;
                cout << "Ingrese el nombre del estudiante que desea buscar: ";
                cin >> name;

                findStudentByName(studentQueue, name);
                break;
            case 3:
                int carnet;
                cout << "Buscando estudiante por carnet" << endl;
                cout << "Ingrese el carnet: ";
                cin >> carnet;

                findStudentById(studentQueue, carnet);
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
    queue<Student> studentQueue;

    menu(studentQueue);
}