// suma N numeros MIENTRAS-PARA.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main() {
    int N;
    int sumaWhile = 0;
    int sumaFor = 0;

    cout << "Ingrese el numero final: ";
    cin >> N;

    // Suma con estructura MIENTRAS
    int i = 0;
    while (i <= N) {
        sumaWhile += i;
        i++;
    }

    // Suma con estructura PARA
    for (int j = 0; j <= N; j++) {
        sumaFor += j;
    }

    // Mostrar solo una de las sumas (ambas son iguales)
    cout << "La suma de los numeros entre 0 y " << N << " es: " << sumaFor << endl;

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
