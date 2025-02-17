#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Dame 2 numeros enteros para poder sumarlos" << endl;
    cout << "Ingresa primer numero: ";
    cin >> a;
    cout << "Ingresa segundo numero: ";
    cin >> b;
    cout << "Resultado: " << a + b << endl;

    float c, d;
    cout << "Dame 2 numeros decimales para poder restarlos" << endl;
    cout << "Ingresa primer numero: ";
    cin >> c;
    cout << "Ingresa segundo numero: ";
    cin >> d;
    cout << "Resultado: " << c - d << endl;

    int e, f;
    cout << "Dame 2 numeros de 3 cifras para multiplicarlos" << endl;
    cout << "Ingresa el primer numero: ";
    cin >> e;
    cout << "Ingresa el segundo numero: ";
    cin >> f;
    cout << "Resultado: " << e * f << endl;

    int g, h;
    cout << "Dame 2 numeros de 4 cifras para poder dividirlos y mostrarte el residuo" << endl;
    cout << "Ingrese el primer numero: ";
    cin >> g;
    cout << "Ingresa el segundo numero: ";
    cin >> h;
    cout << "Resultado: " << g % h << endl;

    return 0;
}
