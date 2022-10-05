#include "stack.h"
#include <cstddef>
#include <iostream>

using namespace std;

Stack::Stack() {
    structure = NULL;
}

Stack::~Stack() {
    NodeType* tmpPtr;
    while(structure != NULL) {
        tmpPtr = structure;
        structure = structure->next;
        delete tmpPtr;
    }
}

bool Stack::isEmpty() const {
    return structure == NULL;
}

// A pilha terá um tamanho indefinido, de acordo com a memória disponível.
// A pilha estará cheia caso não seja mais posível alocar memória para um NodeType.
bool Stack::isFull() const {
    NodeType* location;
    try {
        location = new NodeType;
        delete location;
        return false;
    } catch(bad_alloc exception) {
        return true;
    }
}

void Stack::push(ItemType item) {
    if(!isFull()) {
        NodeType* location;
        location = new NodeType;
        location->info = item;
        location->next = structure;
        structure = location;
    } else {
        throw "A pilha está cheia!";
    }
}

ItemType Stack::pop() {
    if(!isEmpty()) {
        NodeType* tmpPtr;
        tmpPtr = structure; // Lembando: aqui tmpPtr está recebendo o endereço de structure, e não uma cópia da esrututa.
        ItemType item = structure->info;
        structure = structure->next;
        delete tmpPtr;
        return item;
    } else {
        throw "A pilha está vazia!";
    }
}

void Stack::print() const {
    NodeType* tmpPtr = structure;
    while(tmpPtr != NULL) {
        cout << tmpPtr->info;
        tmpPtr = tmpPtr->next;
    }
    cout << endl;
}
