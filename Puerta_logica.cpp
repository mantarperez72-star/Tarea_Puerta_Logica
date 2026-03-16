#include <iostream>
#include <string>
using namespace std;

int main() {
    string nombre;
    int edad;
    float promedio;
    int club;

    cout << "Ingrese su nombre: ";
    getline(cin, nombre);

    cout << "Ingrese su edad: ";
    cin >> edad;

    cout << "Ingrese su promedio: ";
    cin >> promedio;

    cout << "Pertenece al club de programacion? (1 = Si, 0 = No): ";
    cin >> club;

    if (nombre == "David Alvarez") {
        cout << "Acceso especial concedido." << endl;
    }
    else if ((edad >= 18 && promedio >= 85) ||
             (club == 1 && promedio >= 75) ||
             (promedio >= 95)) {
        cout << "Bienvenido " << nombre << "." << endl;
        cout << "Acceso autorizado." << endl;
    }
    else {
        cout << "Acceso denegado." << endl;
    }

    return 0;
}
