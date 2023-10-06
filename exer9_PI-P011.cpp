#include <iostream>

using namespace std;

float calc_serie(int N) {
    float s = 0.0;

    for (int i = 1; i <= N; ++i) {
        s += static_cast<float>(i) / (N - i + 1);

    }

    return s;
}

int main() {
    
    int N;

    cout << "Digite o tamanho de N: ";
    cin >> N;

    float resultado = calc_serie(N);

    // Exibindo o resultado
    cout << "Resultado da serie para N = " << N << " eh: " << resultado << endl;

    return 0;
}
