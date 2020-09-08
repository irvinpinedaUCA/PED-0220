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
    ingresarDatos();
    
    int n;
    cout << "Ingrese la cantidad de notas: ";
    cin >> n;

    estudiante.notas[n];

    ingresarNotas(n, estudiante.notas);

    estudiante.estado = verificarPromedio(calcPromedio(n, estudiante.notas));

    cout << calcPromedio(n, estudiante.notas) << endl;
    cout << estudiante.estado << endl;
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
        cout << "Nota [" << i << "]: ";
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
    if (promedio >= 6) {
        return "Aprobado";
    }else {
        return "Reprobado";
    }
    
}
