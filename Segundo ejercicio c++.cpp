#include <iostream>
using namespace std;

int main() {
    
    float precio;
    cout << "Ingresa el precio del artículo: ";
    cin >> precio;

    float descuento = 15;

    float precio_final = precio * (1 - descuento / 100);

    cout << "El precio final después de aplicar el descuento del 15% es: " << precio_final << endl;

    return 0;
}