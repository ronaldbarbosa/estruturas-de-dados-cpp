#include <iostream>
#include <cstddef>
#include "queue.h"

using namespace std;

Queue::Queue() {
    front = NULL;
    rear = NULL;
}

Queue::~Queue() {
    NodeType* tmpPtr;
    while(front != NULL) {
        tmpPtr = front;
        front = front->next;
        delete tmpPtr;
    }
    rear = NULL;
}

bool Queue::isFull() const {
    NodeType* location;
    try {
        location = new NodeType;
        delete location;
        return false;
    } catch(const std::exception& e) {
        std::cerr << e.what() << '\n';
        return true;
    }
    
}

bool Queue::isEmpty() const {
    return front == NULL;
}

void Queue::enqueue(ItemType newItem) {
    if(!isFull()) {
        NodeType* newNode = new NodeType;
        newNode->info = newItem;
        newNode->next = NULL;
        if(rear == NULL) {
            front = newNode;
        } else {
            rear->next = newNode;
        }
        rear = newNode;
    } else {
        throw "A fila está cheia!";
    }
}

ItemType Queue::dequeue() {
    if(!isEmpty()) {
        NodeType* tmpPtr;
        tmpPtr = front;
        ItemType item = front->info;
        front = front->next;
        if(front == NULL) {
            rear = NULL;
        }
        delete tmpPtr;
        return item;
    } else {
        throw "A fila está vazia!";
    }
}

void Queue::print() const {
    NodeType* tmpPtr = front;
    while(tmpPtr != NULL) {
        cout << tmpPtr->info;
        tmpPtr = tmpPtr->next;
    }
    cout << endl;
}