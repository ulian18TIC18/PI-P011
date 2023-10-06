#include <iostream>

using namespace std;

void maxmin(int vetor[], int n, int *maximo, int *minimo) {
    // Verifica se o vetor tem pelo menos um elemento
    if (n <= 0) {
        cerr << "Vetor vazio.";
        return;
    }

    // Inicializa maximo e minimo com o primeiro elemento do vetor
    *maximo = *minimo = vetor[0];

    // Itera sobre os elementos do vetor para encontrar o máximo e o mínimo
    for (int i = 1; i < n; ++i) {
        if (vetor[i] > *maximo) {
            *maximo = vetor[i];
        } else if (vetor[i] < *minimo) {
            *minimo = vetor[i];
        }
    }
}

int main() {
    const int tamanho = 5;
    int meuVetor[tamanho] = {3, 1, 4, 1, 5};

    int maximo, minimo;

    // Chamada da função maxmin
    maxmin(meuVetor, tamanho, &maximo, &minimo);

    // Exibe os resultados
    cout << "Maximo: " << maximo << endl;
    cout << "Minimo: " << minimo << endl;

    return 0;
}
