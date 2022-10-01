#include <iostream>

using namespace std;

int main() {
    int numero1;
    int numero2;

    cout << "Digite o primeiro número: ";
    cin >> numero1;
    cout << "Digite o segundo número: ";
    cin >> numero2;

    int som = numero1 + numero2;
    int sub = numero1 - numero2;
    int mul = numero1 * numero2;
    int div = numero1 / numero2;
    float fdiv = (float)numero1 / (float)numero2;
    int res = numero1 % numero2;

    cout << "Soma: " << som << endl;
    cout << "Subtração: " << sub << endl;
    cout << "Multiplicação: " << mul << endl;
    cout << "Divisão:" << div << endl;
    cout << "Divisão float:" << fdiv << endl;
    cout << "Resto da divisão: " << res << endl;

    return 0;
}