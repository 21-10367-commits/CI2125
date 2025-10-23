#include <iostream>
using namespace std;

void my_info(int mode, bool b) {
    string nombre = "Carlos Enriquez";
    int carnet = 2110367;
    string resultado;

    if (mode == 1) {
        resultado = b ? "verdadero" : "falso";
    } else {
        resultado = b ? "true" : "false";
    }

    cout << nombre << "\n";
    cout << carnet << "\n";
    cout << resultado << "\n";
}

int main() {
    int modo;
    bool valor;

    cout << "Ingrese el modo (1 o cualquier otro numero): ";
    cin >> modo;

    cout << "Ingrese el valor booleano (0 para false, 1 para true): ";
    cin >> valor;

    my_info(modo, valor);

   
    cout << "Presione cualquier tecla para salir...";
    cin.ignore(); 
    cin.get();    

    return 0;
}

