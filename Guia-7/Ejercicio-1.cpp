#include <iostream>
using namespace std;

int main() {

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
                    
                    cout << endl;
                    break;
                case 2:
                    
                    cout << endl;
                    break;
                case 3:
                    
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