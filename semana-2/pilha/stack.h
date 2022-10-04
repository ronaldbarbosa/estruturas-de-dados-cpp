#include "item_type.h"

#ifndef STACK_H
#define STACK_H

const int MAX_ITEMS = 100;

class Stack {
    private:
        int length;
        ItemType* structure;
    public:
        Stack();
        ~Stack();
        bool isEmpty() const;
        bool isFull() const;
        void print() const;
        void push(ItemType);
        ItemType pop();
};

#endif