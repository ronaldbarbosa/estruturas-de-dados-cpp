#include <iostream>

using namespace std;

const int NUM_ELEM = 10;

// Em caso de passagem de parâmetro com vetores, modificações dentro das funções terão efeito fora.
// O efeito é o mesmo em vetores alocados de forma estáticaou dinâmica.
// Passar o valor como const irá impedir que a função faça alterações no vetor. Se alguma aribuição acontecer, ocorrerá um erro em tempo de compilação.

void modifica_vetor_sintaxe_1(int v[], int num_elem) {
    for(int i = 0; i < num_elem; i++) {
        v[i] = v[i] * 2;
    }
}

void modifica_vetor_sintaxe_2(int* v, int num_elem) {
    for(int i = 0; i < num_elem; i++) {
        v[i] = v[i] * 2;
    }
}

int main() {
    // Alocação estática
    int v1[NUM_ELEM] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // Alocação dinâmica
    int *v2 = new int[NUM_ELEM];
    for(int i = 0; i < NUM_ELEM; i++) {
        v2[i] = i + 1;
    }

    cout << "Antes:" << endl;
    for(int i = 0; i < NUM_ELEM; i++) {
        cout << i << "\t: " << v1[i] << " - " << v2[i] << endl;
    }

    modifica_vetor_sintaxe_1(v1, NUM_ELEM);
    modifica_vetor_sintaxe_2(v2, NUM_ELEM);

    cout << "Depois:" << endl;
    for(int i = 0; i < NUM_ELEM; i++) {
        cout << i << "\t: " << v1[i] << " - " << v2[i] << endl;
    }

    return 0;
}