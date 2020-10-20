#include <iostream>
#include <vector>
#include <queue>
using namespace std;

//Definiendo estructura Producto que va a contener el vector
struct Producto {
    string nombre;
    string tipo;
    float precio;
};

//Definiendo estructura Cliente que va a contener la Cola
struct Cliente {
    string nombre;
    int dui;
    vector<Producto> productos;
};


//Función para borrar un producto por su nombre
void borrarPorNombre(vector<Producto> *listaProductos, string name) {
    //Bandera booleana para verificar si se ha encontrado el producto
    bool encontrado = false;

    //Verificación de que la lista de productos esté vacía o no
    if(listaProductos->empty()) {
        cout << "No hay productos en la lista" << endl;
        return;
    }else {
        //Recorrer la lista por medio de un for
        for (int pos = 0; pos < listaProductos->size(); pos++) {
            //Verificar si el producto en la posición actual tiene el mismo nombre que el string recibido como parámetro
            if(listaProductos->at(pos).nombre == name) {
                //Se modifica la bandera encontrado a verdadero
                encontrado = true;

                //Se manda a llamar la función borrar, desde el primer elemento existente hasta el actual
                listaProductos->erase(listaProductos->begin()+pos);

                cout << "Se borró el producto correctamente" << endl;
                break;
            }
        }

        //Verificando que no exista el producto en la lista
        if(encontrado == false) {
            cout << "No había ningún producto con ese nombre" << endl;
        }
    }
}

//Función para cobrarle a los clientes
float cobrar(queue<Cliente> *colaClientes, float pago) {
    //Verificación que haya clientes en la cola
    if(colaClientes->empty()) {
        cout << "No se ha realizado ningún cobro, no hab►1a clientes en la cola" << endl;
        return 0;
    }else {
        //Recorrer la cola por medio de un while, cuya condición sea que la cola NO esté vacía
        while(!colaClientes->empty()) {
            //Asignar el cliente que se encuentra al frente de la cola a la variable cliente
            Cliente cliente = colaClientes->front();

            cout << "Factura de " << cliente.nombre << "\t" << "\t" << "DUI: " << cliente.dui << endl;
            //Recorrer la lista de los productos del cliente actuales con un for
            for(int i = 0; i < cliente.productos.size(); i++) {
                //Almacenar los valores de precio del producto en la posición i en la variable pago
                pago += cliente.productos.at(i).precio;

                cout << cliente.productos.at(i).nombre << ": $" << cliente.productos.at(i).precio << endl;
            }

            //Eliminar el cliente al frente de la cola porque ya fue atendido, y avanzar en la cola
            colaClientes->pop();
        }
        return pago;
    }
}


int main() {
    //Creando e inicializando la cola de clientes
    queue<Cliente> colaClientes;

    //Creando bandera booleana para iterar el while
    bool status = true;

    //Creando bandera booleana para iterar el segundo while
    bool status2 = true;

    //Menu por medio de while, verificando variable status por cada iteración
    while(status) {
        //Imprimiendo en consola las opciones del menú
        cout << "********** MENU **********" << endl;
        cout << "1. Ingresar un cliente a la cola" << endl;
        cout << "2. Cobrar a los clientes que hay en la cola" << endl;
        cout << "3. Salir del programa" << endl;

        //Creación de variable entera que servirá para ejecutar una opción del menú
        int option;

        //Pidiéndole al usuario que ingrese la opción por medio de consola
        cout << "\n" << "Ingrese la opción del menú que desea ejecutar: ";
        cin >> option;
        cin.ignore();

        //Creación de variable tipo cliente
        Cliente cliente;

        //Creando e inicializando una nueva lista de productos
        vector<Producto> listaProducto;

        //Creando una nueva variable producto
        Producto producto;

        //Creando variable string para el nombre del producto a borrar
        string nombre;

        //Creación de variable entera para la sumatoria de los precios de los productos
        int totalPagado = 0;

        //Case para verificar la opción ingresada
        switch (option){
            case 1:
                //Caso en el que se añade un libro a la pila previamente creada

                //Pidiéndole al usuario que ingrese los datos del clientes
                cout << "Ingrese el nombre del cliente" << endl;
                getline(cin, cliente.nombre);

                cout << "Ingrese el dui del cliente" << endl;
                cin >> cliente.dui;

                status2 = true;
                //While ocupado para la inserción o eliminación de productos en la lista del cliente
                while(status2) {
                    //Menú secundario para ingresar productos o eliminar
                    cout << "*** Productos del cliente ***" << endl;
                    cout << "1. Agregar nuevo producto" << endl;
                    cout << "2. Eliminar producto por nombre" << endl;
                    cout << "3. Finalizar listado de productos" << endl;

                    //Declaración de variable para ingresar opción en el segundo menú
                    int option2;

                    //Pidiéndole al usuario que ingrese la opción a ejecutar del menú
                    cout << "Ingrese la opción que desea ejecutar" << endl;
                    cin >> option2;
                    cin.ignore();

                    switch(option2) {
                        case 1:
                            //Caso en el que se ingresa un nuevo producto

                            //Pidiéndole al usuario los datos para un producto
                            cout << "Ingrese el nombre del producto" << endl;
                            getline(cin, producto.nombre);

                            cout << "Ingrese el tipo del producto" << endl;
                            getline(cin, producto.tipo);

                            cout << "Ingrese el precio del producto" << endl;
                            cin >> producto.precio;

                            //Agregando un producto a la lista
                            listaProducto.push_back(producto);
                            break;
                        case 2:
                            //Caso en el que se borra un producto por su nombre

                            //Pidiéndole al usuario el nombre del producto que desea borrar
                            cout << "Ingrese el nombre del producto que desea borrar" << endl;
                            getline(cin, nombre);

                            //Mandar a llamar a la función para borrar por el nombre
                            borrarPorNombre(&listaProducto, nombre);
                            break;
                        case 3:
                            status2 = false;
                            break;
                        default:
                            cout << "Opción no válida" << endl;
                            break;
                    }
                }
                
                //Agregando la lista de productos al cliente
                cliente.productos = listaProducto;

                //Agregando el cliente a la cola
                colaClientes.push(cliente);

                //Borrando la lista de productos, para reutilizarla para el siguiente cliente
                listaProducto.clear();
                break;
            case 2:
                //Caso en el que se le cobra a los clientes que hay en cola

                totalPagado = cobrar(&colaClientes, 0);

                cout << "Se ha cobrado un total de $" << totalPagado << " a los clientes en cola" << endl;
                break;
            case 3:
                status = false;
                cout << "Fin del programa." << endl;
                break;
            default:
                cout << "Opción no válida" << endl;
                break;
        }
    }
    return 0;
}