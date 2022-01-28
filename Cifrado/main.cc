#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    
    string text;
    vector<char> vocab = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

    cout << "Escriba el mensaje a cifrar: ";
    cin >> text;
    cout << endl;
    transform(text.begin(), text.end(), text.begin(), ::toupper);

    cout << "El mensaje cifrado es: ";

    for(int i = 0; i < text.size(); i++) {

        for(int j = 0; j < vocab.size(); j++){

            if(text[i] == vocab[j]){

                cout << j;
            }
        }
    }

    cout << endl;
    return 0;
}