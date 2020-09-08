#include <iostream>
#include <string>
using namespace std;

struct Estudiante {
    string nombre;
    string apellido;
    float* notas;
};

void ingresarDatos(int, Estudiante[]);
float *ingresarNotas(int);
float calcPromedio(int, float[]);
int encontrarMayor(int, float[]);
void devolverInformacion(int, Estudiante[]);

int main() {
    int n;
    cout << "Ingrese la cantidad de estudiantes: ";
    cin >> n;

    struct Estudiante estudiantes[n];

    ingresarDatos(n, estudiantes);

    int cn;
    cout << "\n" << "Ingrese la cantidad de notas: ";
    cin >> cn;

    for(int i = 0; i < n; i++) {
        estudiantes[i].notas[cn];

        cout << "\n" << "Ingresando notas del estudiante [" << i << "]" << endl;
        estudiantes[i].notas = ingresarNotas(cn);
    }
    
    float promedios[n];

    for (int i = 0; i < n; i++) {
        promedios[i] = calcPromedio(cn, estudiantes[i].notas);
    }

    int pos = encontrarMayor(n, promedios);
    
    devolverInformacion(pos, estudiantes);

    return 0;
}

void ingresarDatos(int n, Estudiante *estudiantes) {
    for (int i = 0; i < n; i++)
    {
        cout << "\n" << "Ingresando datos del estudiante [" << i <<"]" << endl;

        cout << "Ingrese el nombre del estudiante: ";
        cin >> estudiantes[i].nombre;

        cout << "Ingrese el apellido del estudiante: ";
        cin >> estudiantes[i].apellido;
    }
}

float *ingresarNotas(int cn) {
    float *notas = new float[cn];

    for (int i = 0; i < cn; i++)
    {
        cout << "Nota [" << i << "]: ";
        cin >> notas[i];
    }

    return notas;
}

float calcPromedio(int n, float *promedios) {
    float suma = 0, promedio = 0;

    for (int i = 0; i < n; i++)
    {
        suma += promedios[i];
    }

    promedio = suma/n;
    
    return promedio;
}

int encontrarMayor(int cn, float *promedios) {
    float mayor = 0;
    int posicion;

    for (int i = 0; i < cn; i++)
    {
        if (promedios[i] > mayor)
        {
            mayor = promedios[i];
            posicion = i;
        }
    }
    return posicion;
}

void devolverInformacion(int pos, Estudiante *estudiantes) {
    cout << "\n" << "El estudiante con el mayor promedio es " << estudiantes[pos].nombre << " " << estudiantes[pos].apellido << endl;
}