#include <iostream>
using namespace std;

struct Nodo {
    int dato;
    struct Nodo *izq;
    struct Nodo *der;
};
typedef struct Nodo *ABB;

ABB crearNodo(int valor) {
    ABB hijo = new Nodo;
    hijo->dato = valor;
    hijo->izq = NULL;
    hijo->der = NULL;
    return hijo;
}

void asignarNodo(ABB arbol, int valor) {
    ABB temp = arbol;
    while(true) {
        if(temp->dato == valor) {
            cout << "El dato ya existe" << endl;
            break;
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

void preOrder(ABB arbol) {
    if(arbol != NULL) {
        cout << arbol->dato << " ";
        preOrder(arbol->izq);
        preOrder(arbol->der);
    }
}

void inOrder(ABB arbol) {
    if(arbol != NULL) {
        inOrder(arbol->izq);
        cout << arbol->dato << " ";
        inOrder(arbol->der);
    }
}

void postOrder(ABB arbol) {
    if(arbol != NULL) {
        postOrder(arbol->izq);
        postOrder(arbol->der);
        cout << arbol->dato << " ";
    }
}

int alturaArbol(ABB arbol){
    int alturaIzq = 0, alturaDer = 0;
    if(arbol == NULL) {
        return 0;
    }else {
        alturaIzq = alturaArbol(arbol->izq);
        alturaDer = alturaArbol(arbol->der);

        int altura = max(alturaIzq, alturaDer)+1;

        return altura;
    }
}

int calcularNodos(ABB arbol) {
    if(arbol != NULL) {
        int nodos = 1;

        if(arbol->izq != NULL) {
            nodos += calcularNodos(arbol->izq);
        }
        if(arbol->der != NULL) {
            nodos += calcularNodos(arbol->der);
        }

        return nodos;
    }else {
        return 0;
    }
}

int sumarNodos(ABB arbol) {
    if(arbol != NULL) {
        int suma = arbol->dato;

        if(arbol->izq != NULL) {
            suma += sumarNodos(arbol->izq);
        }
        if(arbol->der != NULL) {
            suma += sumarNodos(arbol->der);
        }

        return suma;
    }else {
        return 0;
    }
}

int main() {
    ABB arbol = crearNodo(8);
    asignarNodo(arbol, 3);
    asignarNodo(arbol, 10);
    asignarNodo(arbol, 1);
    asignarNodo(arbol, 6);
    asignarNodo(arbol, 14);
    asignarNodo(arbol, 4);
    asignarNodo(arbol, 7);
    bool status = true;
    bool status2 = true;
    while (status) {
        cout << "***** MENU DE ARBOLES *****" << endl;
        cout << "1. Mostrar árbol" << endl;
        cout << "2. Mostrar la cantidad de niveles del árbol" << endl;
        cout << "3. Mostrar la cantidad de nodos del árbol" << endl;
        cout << "4. Mostrar la suma de los valores de todos los nodos del árbol" << endl;
        cout << "5. Salir del programa" << endl;
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
                    preOrder(arbol);
                    cout << endl;
                    break;
                case 2:
                    inOrder(arbol);
                    cout << endl;
                    break;
                case 3:
                    postOrder(arbol);
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
            cout << "La altura del árbol es: " << alturaArbol(arbol);
            break;
        case 3:
            cout << "El árbol tiene " << calcularNodos(arbol) << " nodos" << endl;
            break;
        case 4:
            cout << "La suma total de los nodos es: " << sumarNodos(arbol) << endl;
            break;
        case 5:
            cout << "Fin del programa" << endl;
            status = false;
            break;
        default:
            cout << "Opción no válida" << endl;
            break;
        }
    }
}