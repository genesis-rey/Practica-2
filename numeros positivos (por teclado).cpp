// numeros positivos (por teclado).cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main() {
    int cantidad, numero;
    int sumaPositivos = 0;
    int noIncluidos = 0;

    cout << "Ingrese la cantidad de numeros: ";
    cin >> cantidad;

    for (int i = 1; i <= cantidad; i++) {
        cout << "Meta el numero #" << i << ": ";
        cin >> numero;

        if (numero > 0) {
            sumaPositivos += numero;
        }
        else {
            noIncluidos++;
        }
    }

    // Calcular porcentaje de números no incluidos
    double porcentajeNoIncluidos = (static_cast<double>(noIncluidos) / cantidad) * 100;

    // Mostrar resultados
    cout << "\nAcumulado numeros positivos: " << sumaPositivos << endl;
    cout << "Porcentaje numeros no incluidos: " << porcentajeNoIncluidos << "%" << endl;

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
