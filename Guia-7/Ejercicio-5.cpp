#include <iostream>
#include <vector>
using namespace std;

struct Nodo {
    int dato;
    struct Nodo *izq;
    struct Nodo *der;
};
typedef struct Nodo *Arbol;

Arbol crearNodo(int valor) {
    Arbol h = new Nodo;
    h->dato = valor;
    h->izq = NULL;
    h->der = NULL;
    return h;
}

void agregarNodo(Arbol a, int valor) {
    Arbol temp = a;
    while(true) {
        if(temp->dato == valor) {
            cout  << "El dato ya existe" << endl;
            return;
        }else if(temp->dato > valor) {
            if(temp->izq == NULL) {
                temp->izq = crearNodo(valor);
                break;
            }else {
                temp = temp->izq;
            }
        }else {
            if(temp->der == NULL) {
                temp->der = crearNodo(valor);
                break;
            }else {
                temp = temp->der;
            }
        }
    }
}

void preOrder(Arbol a) {
    if(a != NULL) {
        cout << a->dato << " ";
        preOrder(a->izq);
        preOrder(a->der);
    }
}

void inOrder(Arbol a) {
    if(a != NULL) {
        inOrder(a->izq);
        cout << a->dato << " ";
        inOrder(a->der);
    }
}

void postOrder(Arbol a) {
    if(a != NULL) {
        postOrder(a->izq);
        postOrder(a->der);
        cout << a->dato << " ";
    }
}

bool buscarDato(Arbol a, int valor) {
    if(a == NULL) {
        return false;
    }
    if(a->dato == valor) {
        return true;
    }
    if(a->dato > valor) {
        return buscarDato(a->izq, valor);
    }else {
        return buscarDato(a->der, valor);
    }
}

void mostrarLista(vector<int> *lista) {
    if(lista->empty()) {
        cout << "La lista está vacía" << endl;
    }else {
        for(int i = 0; i < lista->size(); i++) {
            cout << lista->at(i) << " ";
        }
    }
}

float promedioLista(vector<int> *lista) {
    if(lista->empty()) {
        return 0;
    }else {
        int suma = 0;
        for(int i = 0; i < lista->size(); i++) {
            suma += lista->at(i);
        }

        float promedio = suma/lista->size();

        return promedio;
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
    vector<int> listaEnlazada;

    bool status = true;
    bool status2 = true;
    while (status) {
        cout << "***** MENU DE ARBOLES *****" << endl;
        cout << "1. Mostrar árbol" << endl;
        cout << "2. Buscar un valor en el árbol y añadirlo a una lista" << endl;
        cout << "3. Mostrar lista enlazada" << endl;
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
                    preOrder(a);
                    cout << endl;
                    break;
                case 2:
                    inOrder(a);
                    cout << endl;
                    break;
                case 3:
                    postOrder(a);
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
            cout << "Ingrese un valor a buscar en el árbol: ";
            int valor;
            cin >> valor;
            if(buscarDato(a, valor)) {
                listaEnlazada.push_back(valor);
            }else {
                cout << "El valor no existe en el árbol" << endl;
            }
            break;
        case 3:
            mostrarLista(&listaEnlazada);
            cout << endl;
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

    cout << "El promedio de la lista de datos es: " << promedioLista(&listaEnlazada) << endl;
}