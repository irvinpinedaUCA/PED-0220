#include <iostream>
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

int nodosPares(Arbol a) {
    if(a != NULL){
        int pares = 0;
        if(a->dato % 2 == 0) {
            pares++;
        }

        if(a->izq != NULL) {
            pares += nodosPares(a->izq);
        }
        if(a->der != NULL) {
            pares += nodosPares(a->der);
        }

        return pares;
    }else {
        return 0;
    }
}

int nodosImpares(Arbol a) {
    if(a != NULL){
        int impares = 0;
        if(a->dato % 2 != 0) {
            impares++;
        }

        if(a->izq != NULL) {
            impares += nodosImpares(a->izq);
        }
        if(a->der != NULL) {
            impares += nodosImpares(a->der);
        }

        return impares;
    }else {
        return 0;
    }
}

int sumaPares(Arbol a) {
    if(a != NULL) {
        int suma = 0;

        if(a->dato % 2 == 0) {
            suma += a->dato;
        }

        if(a->izq != NULL){
            suma += sumaPares(a->izq);
        }
        if(a->der != NULL) {
            suma += sumaPares(a->der);
        }

        return suma;
    }else {
        return 0;
    }
}

int sumaImpares(Arbol a) {
    if(a != NULL) {
        int suma = 0;

        if(a->dato % 2 != 0) {
            suma += a->dato;
        }

        if(a->izq != NULL){
            suma += sumaImpares(a->izq);
        }
        if(a->der != NULL) {
            suma += sumaImpares(a->der);
        }

        return suma;
    }else {
        return 0;
    }
}

int nodosNegativos(Arbol a) {
    if(a != NULL){
        int nodos = 0;
        if(a->dato < 0) {
            nodos++;
        }

        if(a->izq != NULL) {
            nodos += nodosNegativos(a->izq);
        }
        if(a->der != NULL) {
            nodos += nodosNegativos(a->der);
        }

        return nodos;
    }else {
        return 0;
    }
}

int nodosCero(Arbol a) {
    if(a != NULL){
        int nodos = 0;
        if(a->dato == 0) {
            nodos++;
        }

        if(a->izq != NULL) {
            nodos += nodosCero(a->izq);
        }
        if(a->der != NULL) {
            nodos += nodosCero(a->der);
        }

        return nodos;
    }else {
        return 0;
    }
}

int nodosPositivos(Arbol a) {
    if(a != NULL){
        int nodos = 0;
        if(a->dato > 0) {
            nodos++;
        }

        if(a->izq != NULL) {
            nodos += nodosPositivos(a->izq);
        }
        if(a->der != NULL) {
            nodos += nodosPositivos(a->der);
        }

        return nodos;
    }else {
        return 0;
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
    agregarNodo(a, -1);
    agregarNodo(a, -10);
    agregarNodo(a, -5);
    agregarNodo(a, 0);
    
    bool status = true;
    bool status2 = true;
    while (status) {
        cout << "***** MENU DE ARBOLES *****" << endl;
        cout << "1. Mostrar árbol" << endl;
        cout << "2. Mostrar la cantidad de nodos pares e impares del árbol" << endl;
        cout << "3. Mostrar la suma de los nodos pares del árbol" << endl;
        cout << "4. Mostrar la suma de los nodos impares del árbol" << endl;
        cout << "5. Mostrar cantidad de nodos negativos, ceros y positivos del árbol" << endl;
        cout << "6. Salir del programa" << endl;
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
            cout << "Hay " << nodosPares(a) << " nodos pares en el árbol" << endl;
            cout << "Hay " << nodosImpares(a) << " nodos impares en el árbol" << endl;
            break;
        case 3:
            cout << "La suma de los nodos pares es: " << sumaPares(a) << endl;
            break;
        case 4:
            cout << "La suma de los nodos impares es: " << sumaImpares(a) << endl;
            break;
        case 5:
            cout << "Hay " << nodosNegativos(a) << " nodos negativos en el árbol" << endl;
            cout << "Hay " << nodosCero(a) << " nodos con valor 0 en el árbol" << endl;
            cout << "Hay " << nodosPositivos(a) << " nodos positivos en el árbol" << endl;
            break;
        case 6:
            cout << "Fin del programa" << endl;
            status = false;
            break;
        default:
            cout << "Opción no válida" << endl;
            break;
        }
    }
}