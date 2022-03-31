#include <iostream>
#include <vector>

using namespace std;

int main() {

    int A;
    int B;
    int i = 1;
    int x = 0;

    cout << "Por favor ingrese el valor referente a la variable A: ";
    cin >> A;
    cout << endl;
    cout << "Por favor ingrese el valor referente a la variable B: ";
    cin >> B;
    cout << endl;

    //{g, u, v, y}
    vector<vector<int>> lista = {{B, A}, {1, 0}, {0, 1}, {0, 0}};

    while(lista[0][i] != 0) {

        lista[3].push_back(lista[0][i-1]/lista[0][i]);
        lista[0].push_back(lista[0][i-1] - lista[3][i+1]*lista[0][i]);
        lista[1].push_back(lista[1][i-1] - lista[3][i+1]*lista[1][i]);
        lista[2].push_back(lista[2][i-1] - lista[3][i+1]*lista[2][i]);
        i++;
    }

    if(lista[2][i-1] < 0) {

        lista[2][i-1] = lista[2][i-1] + lista[0][0];
    }

    x = lista[2][i-1];
    cout << "El inverso de mediante AEE es: " << x << endl;
}