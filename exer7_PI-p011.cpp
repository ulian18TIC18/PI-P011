#include <iostream>

using namespace std;

void multiplica_por_n(int *vet, int qtde, int n) {

    for (int i = 0; i < qtde; ++i) {
        vet[i] *= n;

    }
}

int main() {

    int vetor[] = {1, 7, 13, 11, 5};
    int qtde = sizeof(vetor) / sizeof(vetor[0]);

    multiplica_por_n(vetor, qtde, 2);

    cout << "Vetor Resultante:" << endl;
    for (int i = 0; i < qtde; ++i) {
        cout << vetor[i] << " ";

    }
    cout << endl;

return 0;
}
