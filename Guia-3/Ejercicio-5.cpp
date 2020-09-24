#include <iostream>
#include <string>
using namespace std;

struct Book {
    string title;
    int numPage;
    struct Book *next;
};
typedef struct Book *Stack;