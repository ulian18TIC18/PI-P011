#include <iostream>
#include <vector>

using namespace std;

vector<int>* encontra_letra(const string& str, char letra, int& tamanho) {

    vector<int>* posicoes = new vector<int>;

    for (int i = 0; i < str.size(); ++i) {
        
        if (str[i] == letra) {
            posicoes->push_back(i);

        }
    }

    tamanho = posicoes->size();

    return posicoes;
}

int main() {
    
    string minhaString;
    char minhaLetra;
    int tamanhoVetor;

    cout << "Digite uma string: ";
    cin >> minhaString;
    cout << endl;

    cout << "Digite um caracter: ";
    cin >> minhaLetra;
    cout << endl;

    vector<int>* posicoes = encontra_letra(minhaString, minhaLetra, tamanhoVetor);

    cout << "Posicoes da letra '" << minhaLetra << "' na string: ";

    for (int i = 0; i < tamanhoVetor; ++i) {
        cout << (*posicoes)[i] << " ";

    }

    delete posicoes;

return 0;
}
