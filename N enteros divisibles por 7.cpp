// N enteros divisibles por 7.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main() {
    int cantidad, numero;
    int divisiblesPor7 = 0;
    int noDivisiblesPor7 = 0;

    cout << "Ingrese la cantidad de numeros a procesar: ";
    cin >> cantidad;

    for (int i = 1; i <= cantidad; i++) {
        cout << "Ingrese el numero #" << i << ": ";
        cin >> numero;

        if (numero % 7 == 0) {
            divisiblesPor7++;
        }
        else {
            noDivisiblesPor7++;
        }
    }

    cout << "\nResultados:\n";
    cout << "Numeros divisibles por 7: " << divisiblesPor7 << endl;
    cout << "Numeros NO divisibles por 7: " << noDivisiblesPor7 << endl;

    return 0;
}
// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
