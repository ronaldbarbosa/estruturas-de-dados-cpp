#include "item_type.h"

#ifndef QUEUE_H
#define QUEUE_H

const int MAX_ITEMS = 100;

class Queue {
    private:
        int front;
        int back;
        ItemType* structure;
    public:
        Queue();
        ~Queue();
        bool isEmpty() const;
        bool isFull() const;
        void print() const;
        void enqueue(ItemType);
        ItemType dequeue();
};

#endif