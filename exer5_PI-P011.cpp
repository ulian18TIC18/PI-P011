#include <iostream>

using namespace std;

int insere_meio(int *vetor, int qtde, int elemento) {

    if (qtde % 2 == 0) {

        int posicao = qtde / 2;
        for (int i = qtde; i > posicao; --i) {
            vetor[i] = vetor[i - 1];

        }
        vetor[posicao] = elemento;
        return qtde + 1;

    } 
    
    else {
        
        int posicao = qtde / 2;

        for (int i = qtde; i > posicao; --i) {
            vetor[i] = vetor[i - 1];

        }
        vetor[posicao] = elemento;
        return qtde + 1;

    }
}

int main() {

    int tamanho_maximo = 10;
    int vetor[tamanho_maximo];
    int qtde = 6;

    for (int i = 0; i < qtde; ++i) {
        vetor[i] = i + 1;

    }

    cout << "Numero de elementos no vetor antes da insercao: " << qtde << endl;

    cout << "Vetor antes da insercao:" << endl;
    for (int i = 0; i < qtde; ++i) {
        cout << vetor[i] << " ";
    }

    cout << endl;

    qtde = insere_meio(vetor, qtde, 10);

    cout << "Numero de elementos antes da insercao: " << qtde << endl;

    cout << "Vetor depois da insercao:" << endl;
    for (int i = 0; i < qtde; ++i) {
        cout << vetor[i] << " ";

    }

    cout << endl;

return 0;
}

