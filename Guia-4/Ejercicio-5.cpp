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
    bool found = false;
    while (!aux.empty()) {
        if (aux.front().name == name) {
            found = true;
            cout << "Se encontró el estudiante" << endl;
            cout << "Nombre: " << aux.front().name << endl;
            cout << "Promedio:" << aux.front().average << endl;
            aux.pop();
        }else {
            aux.pop();
        }
    }
    if (!found) {
        cout << "No se encontró al estudiante" << endl;
    }
}

void findStudentById(queue<Student> studentQueue, int id) {
    queue<Student> aux = studentQueue;
    bool found = false;
    while(!aux.empty()) {
        if(aux.front().id == id) {
            found = true;
            cout << "Se encontró al estudiante" << endl;
            cout << "Nombre: " << aux.front().name << endl;
            cout << "Promedio: " << aux.front().average << endl;
            aux.pop();
        }else {
            aux.pop();
        }
    }
    if(!found) {
        cout << "No se encontró al estudiante" << endl;
    }
}

void menu(queue<Student> studentQueue) {
    string name;
    int option;
    bool status = true;
    while(status) {
        cout << "\n" << "***** MENU DE COLAS *****" << endl;
        cout << "1. Ingresar estudiantes a la cola" << endl;
        cout << "2. Buscar estudiante por nombre" << endl;
        cout << "3. Buscar estudiante por carnet" << endl;
        cout << "4. Salir del menu" << endl;

        cout << "\n" << "Ingrese la opción a ejecutar" << endl;
        cin >> option;

        switch(option) {
            case 1:
                cout << "Ingrese el nombre del estudiante" << endl;
                cin >> student.name;
                cout << "Ingrese el carnet del estudiante" << endl;
                cin >> student.id;
                cout << "Ingrese el promedio del estudiante" << endl;
                cin >> student.average;

                studentQueue.push(student);
                break;
            case 2:
                cout << "Ingrese el nombre del estudiante que desea buscar: ";
                cin >> name;

                findStudentByName(studentQueue, name);
                break;
            case 3:
                int id;

                cout << "Ingrese el carnet del estudiante que desea buscar: ";
                cin >> id;

                findStudentById(studentQueue, id);
                break;
            case 4:
                cout << "Fin del programa" << endl;
                status = false;
                break;
            default:
                cout << "Opcion no valida" << endl;
                break;
        }
    }
}

int main() {
    queue<Student> studentQueue;

    menu(studentQueue);
}