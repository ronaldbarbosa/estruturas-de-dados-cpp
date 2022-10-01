#include <iostream>

using namespace std;

void troca_por_valor(int a, int b) {
    int tmp = a;
    a = b;
    b = tmp;
}

void troca_por_referencia(int &a, int &b) {
    int tmp = a;
    a = b;
    b = tmp;
}

int main() {
    int a = 2, b = 3;
    cout << "Troca por valor:" << endl;
    cout << "Antes:\t a = " << a << " e b = " << b << endl;
    troca_por_valor(a, b);
    cout << "Depois:\t a = " << a << " e b = " << b << endl;

    cout << "Troca por referência:" << endl;
    cout << "Antes:\t a = " << a << " e b = " << b << endl;
    troca_por_referencia(a, b);
    cout << "Depois:\t a = " << a << " e b = " << b << endl;

    return 0;
}