#include <iostream>

using namespace std;

const int NUM_ELEM = 5;

int main() {
    // Declaração e atribuição de vetores - Alocação estática (número de elementos fixado em tempo de compilação)
    int v1[NUM_ELEM] = {1, 2, 3, 4, 5};
    int v2[NUM_ELEM];

    for(int i = 0; i < NUM_ELEM; i++) {
        v2[i] = v1[i] * v1[i];
        cout << v2[i] << " | ";
    }


    cout << endl << "-----------------------------------------------" << endl;

    // Declaração e atribuição de vetores - Alocação dinâmica (número de elementos conhecido apenas em tempo de execução)
    int num_elem;
    cout << "Digite o tamanho do vetor: ";
    cin >> num_elem;
    int* v3 = new int[num_elem];
    
    for(int i = 0; i < num_elem; i++) {
        v3[i] = 2 * i;
        cout << v3[i] << " | ";
    }

    delete [] v3;

    return 0;
}