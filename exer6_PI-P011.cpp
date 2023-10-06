#include <iostream>

using namespace std;

int* intercala(int *vet1, int tam1, int *vet2, int tam2) {
 
    int tamResultado = tam1 + tam2;

    int *resultado = new int[tamResultado];

    int i = 0, j = 0, k = 0;

    while (i < tam1 && j < tam2) {
        resultado[k++] = vet1[i++];
        resultado[k++] = vet2[j++];

    }

    while (i < tam1) {
        resultado[k++] = vet1[i++];
    }

    while (j < tam2) {
        resultado[k++] = vet2[j++];
    }

    return resultado;
}

int main() {

    int vetor1[] = {1, 2, 5};

    int tam1 = sizeof(vetor1) / sizeof(vetor1[0]);

    int vetor2[] = {2, 7, 6, 4};

    int tam2 = sizeof(vetor2) / sizeof(vetor2[0]);

    int *resultado = intercala(vetor1, tam1, vetor2, tam2);

    cout << "Vetor Resultante:" << endl;

    for (int i = 0; i < tam1 + tam2; ++i) {
        cout << resultado[i] << " ";
    }

    cout << endl;
    // Liberar a memória alocada para o vetor resultante
    delete[] resultado;

return 0;
}
