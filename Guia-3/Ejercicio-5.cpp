#include <iostream>
#include <string>
using namespace std;

struct Book {
    string title;
    int numPage;
    struct Book *next;
};
typedef struct Book *Stack;

void initialize(Stack *s) {
    *s = NULL;
}

bool empty(Stack *s) {
    return *s == NULL;
}

void push(Stack *s, string title, int numPages) {
    struct Book *book;
    book = (struct Book *)malloc(sizeof(struct Book));
    book->title = title;
    book->numPage = numPages;
    book->next = *s;

    *s = book;
}

void pop (Stack *s) {
    if (!empty(s))
    {
        struct Book *aux = *s;
        *s = (*s)->next;
        delete(aux);
    }else {
        return;
    }
}

void findBookPages(Stack *s, string title) {
    if ((*s)->title == title) {
        cout << "El libro contiene: " << (*s)->numPage << endl;
        return;
    } else {
        pop(s);
        findBookPages(s, title);
    }
    
}

int main() {
    Stack bookStack;
    initialize(&bookStack);

    push(&bookStack, "Libro 1", 35);
    push(&bookStack, "Libro 2", 13);
    push(&bookStack, "Libro 3", 45);
    push(&bookStack, "Libro 4", 100);

    string title;
    cout << "Ingrese el titulo que desea buscar: " << endl;
    getline(cin, title);

    findBookPages(&bookStack, title);
}