#include <iostream>
using namespace std;

int findChar(char *, char);

int main() {
    char string[25];
    char c;

    cout << "Ingrese una palabra (máximo 25 caracteres): " ;
    cin >> string;
    cout << "Ingrese el caracter que desea buscar en la palabra: " ;
    cin >> c;

    cout << "\n" << "El caracter '" << c << "' se encuentra en la posición [" << findChar(string, c) << "] del arreglo." << endl;
    
    return 0;
}

int findChar(char *string, char c) {
    int cont = 0;
    int pos;

    while (*string) {
        if (*string == c) {
            pos = cont;
            break;
        }else {
            cont++;
        }
        string++;
    }
    return pos;
}