#include <iostream>

using namespace std;

int main() {
    // Dearação das variáveis
    int alpha, beta;
    int* intPointer1;
    int* intPointer2;

    // Inicialização do ponteiro: alocação estática
    intPointer1 = &alpha;

    // Inicialização do ponteiro: alocação dinâmica
    intPointer2 = new int;

    // Alterando o conteúdo dos endereços apontados
    *intPointer1 = 10;
    *intPointer2 = 20;

    // Obtendo o conteúdo do endereço apontado
    beta = *intPointer2;

    cout << alpha << endl << beta << endl;
    cout << *intPointer1 << endl;
    cout << *intPointer2 << endl;

    cout << "-------------------------------------------------" << endl;

    // Cuidados com ponteiros: operações parecidas com resutados diferentes
    float* floatPointer1 = new float;
    *floatPointer1 = 13.00;
    float* floatPointer2 = new float; 

    // Aqui, o conteúdo na memória apontado por floatPointer1 é copiado para a região de memória apontada por floatPointer2 
    *floatPointer2 = *floatPointer1;

    // Nesse caso, floatPointer2 passará a apontar para a mesma região de floatPointer1
    floatPointer2 = floatPointer1;

    // Para evitar vazamento de memória causado pela segunda situação:
    delete floatPointer2;
    floatPointer2 = floatPointer1;
}