#include <iostream>

using namespace std;

void maxmin(int vetor[], int n, int *maximo, int *minimo) {

    if (n <= 0) {
        cerr << "Vetor vazio.";
        return;
        
    }

    *maximo = *minimo = vetor[0];

    for (int i = 1; i < n; ++i) {

        if (vetor[i] > *maximo) {
            *maximo = vetor[i];

        } 
        else if (vetor[i] < *minimo) {
            *minimo = vetor[i];
        }
    }
}

int main() {

    int tamanho = 5;
    int meuVetor[tamanho] = {3, 1, 4, 1, 5};
    int maximo, minimo;

    maxmin(meuVetor, tamanho, &maximo, &minimo);

    cout << "Maximo: " << maximo << endl;
    cout << "Minimo: " << minimo << endl;

return 0;
}
