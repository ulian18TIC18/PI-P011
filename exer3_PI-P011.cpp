#include <iostream>

using namespace std;

void ordenar(float &num1, float &num2, float &num3, float &num4) {
    float temp;

    if (num1 > num2) {
        temp = num1;
        num1 = num2;
        num2 = temp;

    }

    if (num2 > num3) {
        temp = num2;
        num2 = num3;
        num3 = temp;

    }

    if (num3 > num4) {
        temp = num3;
        num3 = num4;
        num4 = temp;

    }

    if (num1 > num2) {
        temp = num1;
        num1 = num2;
        num2 = temp;

    }

    if (num2 > num3) {
        temp = num2;
        num2 = num3;
        num3 = temp;

    }

    if (num3 > num4) {
        temp = num3;
        num3 = num4;
        num4 = temp;

    }
}

int main() {

    float num1, num2, num3, num4;

    cout << "Digite quatro numeros: ";
    cin >> num1 >> num2 >> num3 >> num4;

    ordenar(num1, num2, num3, num4);

    cout << "Numero ordenados: " << num1 << " " 
    << num2 << " " << num3 << " " << num4 << endl;

return 0;
}