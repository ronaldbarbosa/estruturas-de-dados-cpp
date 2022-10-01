#include <iostream>

using namespace std;

int main() {
    int numero1;
    int contador1 = 0;
    int menoresQue5 = 0;

    while (contador1 < 10) {
        cout << "Digite um número(" << contador1 << "):";
        cin >> numero1;

        if(numero1 < 5) {
            menoresQue5++;    
        }
        contador1++;
    }
    cout << "Quantidade de valores menores do que 5: " << menoresQue5 << endl;
    
    // -----------------------------------------------------------------------------

    int total = 0;
    for(int i = 2; i <= 20; i += 2) {
        total += i;
    }
    cout << "Soma dos valores pares menores ou iguais a 20: " << total << endl;

    // -----------------------------------------------------------------------------

    int contador2 = 0;
    int numero2;
    int soma = 0;
    do {
        cout << "Insira um novo número: ";
        cin >> numero2;
        soma += numero2;
        contador2++;
    } while (numero2 != 0);
    float media = (float)soma/(float)(contador2 - 1);
    cout << "Média igual a: " << media << endl;
    
    return 0;
}