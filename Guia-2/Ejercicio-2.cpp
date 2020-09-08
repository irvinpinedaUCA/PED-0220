#include <iostream>
#include <string>
using namespace std;

struct Estudiante {
    string nombre;
    string apellido;
    float* notas;
};

void ingresarDatos(int, int, Estudiante[]);
float *ingresarNotas(int);
float calcPromedio(int, float[]);
int encontrarMayor(int, float[]);
void devolverEstudiante(int, Estudiante[]);

int main() {
    int n, cn;

    cout << "Ingrese la cantidad de estudiantes: ";
    cin >> n;

    cout << "Ingrese la cantidad de notas de los estudiantes: ";
    cin >> cn;

    struct Estudiante estudiantes[n];

    ingresarDatos(n, cn, estudiantes);

    for (int i = 0; i < n; i++) {
        estudiantes[i].notas[cn];

        cout << "\n" << "Ingresando las notas del estudiante [" << i << "]" << endl;
        cin.clear();

        estudiantes[i].notas = ingresarNotas(cn);
    }
    
    float promedios[n];

    for (int i = 0; i < n; i++) {
        promedios[i] = calcPromedio(cn, estudiantes[i].notas);
    }

    int posMayor;

    posMayor = encontrarMayor(n, promedios);
    
    devolverEstudiante(posMayor, estudiantes);

    return 0;
}

void ingresarDatos(int n, int cn, Estudiante *estudiantes) {
    for (int i = 0; i < n; i++) {
        cout << "\n" << "Ingresando datos del estudiante [" << i << "]" << endl;
        
        cout << "Ingrese el nombre del estudiante: ";
        cin >> estudiantes[i].nombre;
        
        cout << "Ingrese el apellido del estudiante: ";
        cin >> estudiantes[i].apellido;
    }
}

float *ingresarNotas(int cn) {
    float *notas = new float[cn];

    for (int i = 0; i < cn; i++) {
        cout << "Nota [" << i << "]: ";
        cin >> notas[i];
    }

    return notas;
}

float calcPromedio(int cn, float *notas) {
    float suma = 0, promedio = 0;

    for (int i = 0; i < cn; i++) {
        suma += notas[i];
    }
    
    promedio = suma/cn;

    return promedio;
}

int encontrarMayor(int n, float *promedios) {
    float mayor = 0;
    int posicion;
    for (int i = 0; i < n; i++) {
        if (promedios[i] > mayor) {
            mayor = promedios[i];
            posicion = i;
        }
    }

    return posicion;
}

void devolverEstudiante(int pos, Estudiante *estudiantes) {
    cout << "\n" << "El estudiante con el mayor promedio es: " << estudiantes[pos].nombre << " " << estudiantes[pos].apellido << endl;
}
