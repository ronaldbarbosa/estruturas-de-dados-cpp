#include <iostream>

using namespace std;

// Não altera o valor da variável fora da função e nem o endereço para qual o ponteiro de fora apontava (o parâmentro foi passado por valor).
void valor_alocando_memoria(int* p) {
    p = new int;
    *p = 7;
}

// Altera o valor da variável fora da função. A passagem de parâmetro foi por valor, porém é modificado o endereço de memória para onde o ponteiro aponta.
// Tanto a variável b quanto o ponteiro apontavam pra uma região de memória, e ambos foram alterados.
void valor_modificando_memoria(int* p) {
    *p = 8;
}

// Altera o endereço apontado por p3, mas a variável c não é afetada.
void referencia(int*& p) {
    p = new int;
    *p = 9;
}

int main() {
    int a = 1;
    int b = 2;
    int c = 3;
    int* p1 = &a;
    int* p2 = &b;
    int* p3 = &c;

    cout << "Antes: " << p1 << " - " << p2 << " - " << p3 << endl;
    cout << "Antes: " << *p1 << " - " << *p2 << " - " << *p3 << endl;
    cout << endl;

    valor_alocando_memoria(p1);
    valor_modificando_memoria(p2);
    referencia(p3);

    cout << "Depois: " << p1 << " - " << p2 << " - " << p3 << endl;
    cout << "Depois: " << *p1 << " - " << *p2 << " - " << *p3 << endl;
    cout << "Depois: " << a << " - " << b << " - " << c << endl;

    return 0;
}