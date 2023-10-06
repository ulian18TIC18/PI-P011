#include <iostream>
#include <string>

using namespace std;

string caracteresComuns(const string& A, const string& B) {
    string somaString;

    for (char c : A) {
        
        if (B.find(c) != string::npos && somaString.find(c) == string::npos) {
            somaString += c;
        }
    }

    return somaString;
}

int main() {
  
    string strA, strB;

    cout << "Digite a primeira string: ";    
    getline(cin, strA);

    cout << "Digite a segunda string: ";

    getline(cin, strB);

    string somaString = caracteresComuns(strA, strB);

    cout << "Caracteres encontrados nas duas strings: " << somaString << endl;

return 0;
}
