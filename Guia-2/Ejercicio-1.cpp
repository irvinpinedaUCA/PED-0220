#include <iostream>
#include <string>
using namespace std;

struct Estudiante {
    string nombre;
    string apellido;
    string estado = "Indefindo";
    float notas[];
};
struct Estudiante estudiante;

void ingresarDatos();
void ingresarNotas(int, float[]);
float calcPromedio(int, float[]);
string verificarPromedio(float);

int main() {
    int n;
    cout << "Ingrese la cantidad de notas: ";
    cin >> n;

    estudiante.notas[n];

    ingresarDatos();

    ingresarNotas(n, estudiante.notas);

    float promedio = calcPromedio(n, estudiante.notas);

    estudiante.estado = verificarPromedio(promedio);

    cout << "\n" << "Mostrando informacion del estudiante" << endl;
    cout << "Nombre del estudiante: " << estudiante.nombre << endl;
    cout << "Apellido del estudiante: " << estudiante.apellido << endl;
    cout << "El estudiante está " << estudiante.estado << " con un promedio de " << promedio << endl;
}

void ingresarDatos() {
    cout << "Ingrese el nombre del estudiante: ";
    cin >> estudiante.nombre;
    cout << "Ingrese el apellido del estudiante: ";
    cin >> estudiante.apellido;    
}

void ingresarNotas(int n, float *notas) {
    cout << "\n" << "Ingrese las notas del estudiante" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Notas [" << i << "]: ";
        cin >> estudiante.notas[i];
    }
}

float calcPromedio(int n, float *notas) {
    float suma = 0, promedio = 0;
    for (int i = 0; i < n; i++)
    {
        suma += notas[i];
    }

    promedio = suma/n;
    
    return promedio;
}

string verificarPromedio(float promedio) {
    if (promedio >= 6)
    {
        return "Aprobado";
    }else {
        return "Reprobado";
    }
}