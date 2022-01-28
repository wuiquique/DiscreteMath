#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;

int main() {
    
    string text;
    int mod;
    vector<int> res;
    vector<int> num;
    vector<char> cifrado;
    vector<char> vocab = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

    cout << "Escriba el mensaje a cifrar: ";
    cin >> text;
    cout << endl;
    transform(text.begin(), text.end(), text.begin(), ::toupper);

    cout << "Escriba el modulo para cifrar (int): ";
    cin >> mod;
    cout << endl;

    for(int i = 0; i < text.size(); i++) {

        for(int j = 0; j < vocab.size(); j++){

            if(text[i] == vocab[j]){

                res.push_back(j);
            }
        }
    }

    for(int i = 0; i < res.size(); i++){

        num.push_back( (mod*res[i]) % 27);
    }

    for(int i = 0; i < num.size(); i++) {

        cifrado.push_back(vocab[num[i]]);
    }

    cout << "EL mensaje cifrado es: ";

    for(int i = 0; i < cifrado.size(); i++) {

        cout << cifrado[i];
    }

    cout << endl;
    return 0;
}