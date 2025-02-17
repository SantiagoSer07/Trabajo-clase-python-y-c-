#include <iostream>
using namespace std;

int main() {
    
    float variable;
    cout << "Ingresa el valor inicial de la variable: ";
    cin >> variable;

    variable += 5;

    variable -= 3;

    variable *= 2;

    variable /= 4;

    cout << "El resultado final es: " << variable << endl;

    return 0;
}