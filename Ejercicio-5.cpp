#include <iostream>
using namespace std;

int main() {
    char string[] = "Puntero";
    char *p = string;

    cout << "Primera línea" << endl;
    cout << string[0] << " " << *p << " " << string[2] << endl;
    
    p += 3;

    cout << "\n" << "Segunda línea" << endl;
    cout << *p << " " << p[1] << " " << p[2] << " " << p[3]<< endl;

    return 0;
}