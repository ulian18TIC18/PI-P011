#include <iostream>

using namespace std;

// Função que verifica se um número é primo
bool eh_primo(int num) {
    if (num < 2) {
        return false;
    }

    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}

// Função que conta a quantidade de números primos em um vetor
int conta_primos(int *vet, int qtde) {
    int count = 0;

    for (int i = 0; i < qtde; ++i) {
        if (eh_primo(vet[i])) {
            count++;
        }
    }

    return count;
}

int main() {

    int vetor[] = {22, 3, 14, 15, 76, 70, 18, 19, 10, 11};
    int qtde = sizeof(vetor) / sizeof(vetor[0]);

    int primos = conta_primos(vetor, qtde);

    cout << "Quantidade de numeros primos no vetor de teste: " << primos << endl;

    return 0;
}
