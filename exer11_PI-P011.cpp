#include <iostream>
#include <string>

using namespace std;

string codificar(const string& input) {
    string resultado = input;

    for (char& c : resultado) {

        if (isalpha(c)) {

            if (c == 'Z' || c == 'z') {
                // Caso especial para Z e z
                c -= 25;

            } 
            else {
                c++;

            }
        }
    }

    return resultado;
}

string decodificar(const string& input) {
    string resultado = input;

    for (char& c : resultado) {

        if (isalpha(c)) {

            if (c == 'A' || c == 'a') {
                c += 25;
            } 
            else {
                c--;
                
            }
        }
    }

    return resultado;
}

int main() {

    string minhaString;

    cout << "Digite uma string: " << endl;
    cin >> minhaString;
    

    getline(cin, minhaString);

    string stringCodificada = codificar(minhaString);
    cout << "String Codificada: " << stringCodificada << endl;

    string stringDecodificada = decodificar(stringCodificada);
    cout << "String Decodificada: " << stringDecodificada << endl;

return 0;
}
