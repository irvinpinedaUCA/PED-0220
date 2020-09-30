#include <iostream>
#include <queue>
using namespace std;
<<<<<<< HEAD

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

=======

struct Student {
    string name;
    string last;
    int id;
    float average;
};
struct Student student;

void findStudentByName(queue<Student> studentQueue, string name) {
    queue<Student> clone = studentQueue;
    if (clone.front().name == name) {
        cout << "Se encontró al estudiante" << endl;
        return;
    }else {
        clone.pop();
        findStudentByName(clone, name);
    }
}

void findStudentById(queue<Student> studentQueue, int id) {
    queue<Student> clone = studentQueue;
    if (clone.front().id == id) {
        cout << "Se encontró al estudiante" << endl;
        return;
    }else {
        clone.pop();
        findStudentById(clone, id);
    }
    
}

void menu(queue<Student> studentQueue) {
    string name;
    int option;
    bool status = true;
    while(status) {
        cout << "\n" << "***** MENU DE COLAS *****" << endl;
        cout << "1. Ingresar un estudiante a la cola" << endl;
        cout << "2. Buscar estudiante por nombre" << endl;
        cout << "3. Buscar estudiante por id" << endl;
        cout << "4. Salir del menu" << endl;

        cout << "\n" << "Ingrese la opción que desea ejecutar: ";
        cin >> option;

        switch(option){
            case 1:
                cout << "Ingrese el nombre del estudiante" << endl;
                cin >> student.name;
                cout << "Ingrese el apellido del estudiante" << endl;
                cin >> student.last;
                cout << "Ingrese el id (carnet) del estudiante" << endl;
                cin >> student.id;
                cout << "Ingrese el promedio del estudiante" << endl;
                cin >> student.average;

                studentQueue.push(student);
                break;
            case 2:
                cout << "Ingrese el nombre del estudiante que desea buscar" << endl;
                cin >> name;

                findStudentByName(studentQueue, name);
                break;
            case 3:
                int id;
                cout << "Ingrese el carnet que desea buscar" << endl;
                cin >> id;


                findStudentById(studentQueue, id);
                break;
            case 4:
                cout << "Fin del programa" << endl;
                status = false;
                break;
            default:
                cout << "Opción no válida" << endl;
                break;
        }
    }
}

>>>>>>> dcf7e3cc474c7e984982e8152b7a6e8f5d7959bf
int main() {
    queue<Student> studentQueue;

    menu(studentQueue);
}