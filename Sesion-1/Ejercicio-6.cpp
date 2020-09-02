#include <iostream>
using namespace std;

int countVocals(char *);

int main() {
    char string[25];
    cout << "Ingrese una palabra (máximo 25 caracteres): ";
    cin >> string;
    cout << "\n" << countVocals(string) <<endl;
    
}

int countVocals(char *string){
    int count = 0;
    cout << "string w/o *: " << string << endl;
    cout << "String w *: " <<*string << endl;
    while(*string) {
        switch(*string) {
            case 'a': 
                count++;
                break;
            case 'e':
                count++;
                break;
            case 'i':
                count++;
                break;
            case 'o':
                count++;
                break;
            case 'u':
                count++;
                break;
            default:
                break;
        }
        cout << "string ++: " << string++ << endl;
    }
    return count;
}