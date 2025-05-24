// Promedio de N notas.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main() {
    int cantidadNotas;
    float nota, sumaNotas = 0;
    int notasValidas = 0, notasInvalidas = 0;

    cout << "Ingrese el numero de notas: ";
    cin >> cantidadNotas;

    for (int i = 1; i <= cantidadNotas; ++i) {
        cout << "Meta la nota #" << i << ": ";
        cin >> nota;

        if (nota >= 0 && nota <= 5) {
            sumaNotas += nota;
            notasValidas++;
        }
        else {
            notasInvalidas++;
        }
    }

    if (notasValidas > 0) {
        float promedio = sumaNotas / notasValidas;
        cout << "\nPromedio: " << promedio << endl;
    }
    else {
        cout << "\nNo se ingresaron notas validas para calcular el promedio.\n";
    }

    float porcentajeMalas = (static_cast<float>(notasInvalidas) / cantidadNotas) * 100;
    cout << "Porcentaje notas malas: " << porcentajeMalas << "%" << endl;

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
