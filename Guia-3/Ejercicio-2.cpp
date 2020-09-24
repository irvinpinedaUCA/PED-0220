#include <iostream>
using namespace std;

struct Node {
    int element;
    struct Node *next;
};
typedef struct Node *Stack;

void initialize(Stack *s) {
    *s = NULL;
}

bool empty(Stack *s) {
    return *s == NULL;
}

void push(Stack *s, int e) {
    struct Node *node;
    node = (struct Node *)malloc(sizeof(struct Node));
    node->element = e;
    node->next = *s;

    *s = node;
}

void pop(Stack *s) {
    if (!empty(s)) {
        struct Node *node = *s;
        *s = (*s)->next;
        delete(node);
    }else {
        return;
    }
}

void showStack(Stack *s) {
    struct Node *node = *s;
    bool isEmpty = false;
    while (!isEmpty)
    {
        if (!empty(&node))
        {
            cout << node->element << " ";
            node = node->next;
        }else {
            isEmpty = true;
        }
    }
}

int main() {
    
}