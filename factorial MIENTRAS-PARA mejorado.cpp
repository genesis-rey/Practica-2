// factorial MIENTRAS-PARA mejorado.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "*** Ejecución Iniciada. ***" << endl;

    while (true) {
        cout << "Digite el numero al cual le desea sacar el factorial (o un numero negativo para terminar): ";
        cin >> n;

        if (n < 0) {
            break; // Termina el bucle si el numero es negativo
        }

        // Usando estructura FOR (PARA)
        int factorial = 1;
        for (int i = 1; i <= n; i++) {
            factorial *= i;
        }
        cout << "1. Resultado usando FOR: " << factorial << endl;

        // Usando estructura WHILE (MIENTRAS)
        factorial = 1;
        int i = 1;
        while (i <= n) {
            factorial *= i;
            i++;
        }
        cout << "2. Resultado usando WHILE: " << factorial << endl;
    }

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
