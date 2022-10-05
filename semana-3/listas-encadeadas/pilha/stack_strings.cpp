#include <iostream>
#include "stack.h"

using namespace std;

int main() {
    ItemType character;
    Stack stack;
    ItemType stackItem;
    bool isMatched = true;

    cout << "Insira uma string." << endl;
    cin.get(character);
    while(character != '\n') {
        if(character == '{' || character == '[' || character == '(') {
            stack.push(character);
        }
        if(character == '}' || character == ']' || character == ')') {
            if(stack.isEmpty()) {
                isMatched = false;
            } else {
                stackItem = stack.pop();
                isMatched = (
                    (character == '}' && stackItem == '{') ||
                    (character == ']' && stackItem == '[') ||
                    (character == ')' && stackItem == '(')
                );
            }
        }
        cin.get(character);
    }

    if(isMatched && stack.isEmpty()) {
        cout << "Bem formada" << endl;
    } else {
        cout << "Mal formada" << endl;
    }

    return 0;
}