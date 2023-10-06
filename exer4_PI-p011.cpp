#include <iostream>

using namespace std;

void calcularOperacoes(int &x, int &y) {
    // Soma de X e Y
    x = x + y;

    y = x - 2 * y;
}

int main() {

    int x, y;

    cout << "Digite dois numeros: ";
    cin >> x >> y;

    calcularOperacoes(x, y);

    cout << "A soma de X e Y: " << x << endl;
    cout << "A subtracao de X e Y: " << y << endl;

return 0;
}
