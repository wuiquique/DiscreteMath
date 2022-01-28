#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;

int main() {
    
    string text;
    int mod;
    vector<int> num;
    vector<char> cifrado;
    vector<char> vocab = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '\n', '\t'};

    cout << "Escriba el mensaje a cifrar: ";
    getline(cin, text);
    cout << endl;
    transform(text.begin(), text.end(), text.begin(), ::toupper);

    cout << "Escriba el modulo para cifrar (int): ";
    cin >> mod;
    cout << endl;

    for(int i = 0; i < text.size(); i++) {
        for(int j = 0; j < vocab.size(); j++) {

            if(text[i] == vocab[j]) {

                num.push_back( (mod*j) % 27);
                break;
            }
        }
    }

    for(int i = 0; i < num.size(); i++) {

        cifrado.push_back(vocab[num[i]]);
        
    }

    cout << "El mensaje cifrado es: ";

    for(int i = 0; i < cifrado.size(); i++) {

        cout << cifrado[i];
    }

    cout << endl;
    return 0;
}