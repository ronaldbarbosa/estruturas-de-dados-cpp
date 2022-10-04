#include <iostream>
#include "stack.h"

using namespace std;

Stack::Stack() {
    length = 0;
    structure = new ItemType[MAX_ITEMS];
}

Stack::~Stack() {
    delete [] structure;
}

bool Stack::isEmpty() const {
    return length == 0;
}

bool Stack::isFull() const {
    return length == MAX_ITEMS;
}

void Stack::print() const {
    cout << "Pilha = ";
    for(int i = 0; i < length; i++) {
        cout << structure[i];
    }
    cout << endl;
}

void Stack::push(ItemType item) {
    if(!isFull()) {
        structure[length] = item;
        length++;
    } else {
        throw "A pilha está cheia!";
    }
}

ItemType Stack::pop() {
    if(!isEmpty()) {
        ItemType aux = structure[length - 1];
        length--;
        return aux;
    } else {
        throw "Pilha está vazia!";
    }
}