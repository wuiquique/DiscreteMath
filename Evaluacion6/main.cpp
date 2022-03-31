#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <cmath>
using namespace std;

int main() {

    int A;
    int B;
    int n;
    int x = 1;
    string binary;

    cout << "Favor de ingresar las variables que se le solicitaran a continuacion.\n";
    cout << "A: ";
    cin >> A;
    cout << endl << "B: ";
    cin >> B;
    cout << endl << "n: ";
    cin >> n;
    cout << endl;

    while(B != 0) {

        binary = (B%2==0 ?"0":"1") + binary; 
        B /= 2;
    }

    cout << "El numero B en binario es: " << binary << endl;

    for(int j = 0; j < binary.size(); j++) {
        
        if(binary[j] == '0') {

            int y = ((int) pow(x, 2));
            x = y % n;
            cout << x << endl;
        }

        else if(binary[j] == '1') {

            int y = ((int) pow(x, 2));
            x = y * A % n;
            cout << x << endl;
        }
    }

    cout << "El resultado de la operacion es: " << x << endl;
}