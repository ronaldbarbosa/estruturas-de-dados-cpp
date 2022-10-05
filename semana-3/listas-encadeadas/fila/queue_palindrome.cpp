#include <iostream>
#include "queue.h"
#include "../pilha/stack.h"

using namespace std;

int main() {
    char character;
    Queue queue;
    Stack stack;
    char queueChar;
    char stackChar;
    bool palindrome = true;

    cout  << "Adicione uma string." << endl;
    cin.get(character);
    while(character != '\n') {
        stack.push(character);
        queue.enqueue(character);
        cin.get(character);
    }

    while(palindrome && !queue.isEmpty()) {
        stackChar = stack.pop();
        queueChar = queue.dequeue();
        if(stackChar != queueChar) {
            palindrome = false;
        }
    }

    if(palindrome) {
        cout << "É palímdromo!" << endl;
    } else {
        cout << "Não é palíndromo!" << endl;
    }

    return 0;
}