#include <iostream>
using namespace std;

struct Nodo {
    int valor;
    struct Nodo *izq;
    struct Nodo *der;
};
typedef struct Nodo *Arbol;

Arbol crearNodo(int valor) {
    Arbol h = new Nodo;
    h->valor = valor;
    h->izq = NULL;
    h->der = NULL;
    return h;
}

void asignarIzq(Arbol a, int valor) {
    if(a == NULL) {
        cout << "El árbol está vacío" << endl;
    }else if(a->izq != NULL) {
        cout << "Ya exite un subarbol izquierdo" << endl;
    }else {
        a->izq = crearNodo(valor);
    }
}

void asignarDer(Arbol a, int valor) {
    if(a == NULL) {
        cout << "El árbol está vacío" << endl;
    }else if(a->der != NULL) {
        cout << "Ya exite un subarbol derecho" << endl;
    }else {
        a->der = crearNodo(valor);
    }
}

void agregarNodo(Arbol a, int valor) {
    Arbol temp = a;
    while(true) {
        if(temp->valor == valor) {
            cout << "El dato ya existe" << endl;
            return;
        }else if(temp->valor > valor) {
            if(temp->izq == NULL) {
                break;
            }else {
                temp = temp->izq;
            }
        }else {
            if(temp->der == NULL) {
                break;
            }else {
                temp = temp->der;
            }
        }
    }

    if(temp->valor > valor) {
        asignarIzq(temp, valor);
    }else {
        asignarDer(temp, valor);
    }
}

void mostrarArbolPreO(Arbol a) {
    if(a != NULL) {
        cout << a->valor << " ";
        mostrarArbolPreO(a->izq);
        mostrarArbolPreO(a->der);
    }
}

void mostrarArbolInO(Arbol a) {
    if(a != NULL) {
        mostrarArbolInO(a->izq);
        cout << a->valor << " ";
        mostrarArbolInO(a->der);
    }
}

void mostrarArbolPostO(Arbol a) {
    if(a != NULL) {
        mostrarArbolInO(a->izq);
        mostrarArbolInO(a->der);
        cout << a->valor << " ";
    }
}

int main() {
    Arbol a = crearNodo(8);
    agregarNodo(a, 3);
    agregarNodo(a, 10);
    agregarNodo(a, 1);
    agregarNodo(a, 6);
    agregarNodo(a, 4);
    agregarNodo(a, 7);
    agregarNodo(a, 14);
    agregarNodo(a, 13);

    bool status = true;
    bool status2 = true;
    while (status) {
        cout << "***** MENU DE ARBOLES *****" << endl;
        cout << "1. Mostrar árbol" << endl;
        cout << "2. Mostrar el nodo con el valor más bajo del árbol" << endl;
        cout << "3. Mostrar el nodo con el valor más alto del árbol" << endl;
        cout << "4. Salir del programa" << endl;
        cout << "Ingrese una opción: " << endl; 
        int opcion;
        cin >> opcion;
        switch (opcion) {
        case 1:
            status2 = true;
            while(status2){
                cout << "Forma para mostrar el árbol" << endl;
                cout << "1. Pre orden" << endl;
                cout << "2. In orden" << endl;
                cout << "3. Post orden" << endl;
                cout << "4. Regresar al menú anterior" << endl;
                cout << "Ingrese una opción" << endl;
                int opcion2;
                cin >> opcion2;
                switch (opcion2) {
                case 1:
                    mostrarArbolPreO(a);
                    cout << endl;
                    break;
                case 2:
                    mostrarArbolInO(a);
                    cout << endl;
                    break;
                case 3:
                    mostrarArbolPostO(a);
                    cout << endl;
                    break;
                case 4:
                    status2 = false;
                    break;
                default:
                    cout << "Opción no válida" << endl;
                    break;
                }
            }
            break;
        case 2:
            
            break;
        case 3:
            
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