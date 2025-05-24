// generar numeros de N en adelante.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main() {
    int numero, opcion;

    cout << "Ingrese el numero: ";
    cin >> numero;

    // Asegurarse de que comenzamos en un número par
    if (numero % 2 != 0) {
        numero++;
    }

    do {
        cout << numero << endl;
        numero += 2;  // Siguiente número par

        cout << "Digite 1 si quiere ver otro numero (0 para salir): ";
        cin >> opcion;
    } while (opcion == 1);

    cout << "*** Ejecucion Finalizada. ***" << endl;

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
