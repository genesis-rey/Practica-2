// Longitud patas de mesa.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main() {
    int l1, l2, l3, l4;
    int mesas4 = 0, mesas3 = 0, sobrantes = 0;
    int opcion;

    cout << "*** Ejecucion Iniciada. ***" << endl;

    do {
        cout << "\nMeta 1 si hay datos u otro valor en caso contrario" << endl;
        cin >> opcion;

        if (opcion != 1) break;

        cout << "Digite las 4 longitudes:" << endl;
        cin >> l1 >> l2 >> l3 >> l4;

        // Contar cuántas veces se repite cada valor
        int iguales = 0;

        if (l1 == l2 && l1 == l3 && l1 == l4) {
            mesas4++;
        }
        else if (l1 == l2 && l1 == l3 || l1 == l2 && l1 == l4 || l1 == l3 && l1 == l4 ||
            l2 == l3 && l2 == l4 || l3 == l4 && l3 == l1 || l2 == l3 && l2 == l1) {
            mesas3++;
            sobrantes += 1;
        }
        else {
            sobrantes += 4;
        }

    } while (true);

    cout << "\n******************************" << endl;
    cout << "Mesas de 4 patas: " << mesas4 << endl;
    cout << "Mesas de 3 patas: " << mesas3 << endl;
    cout << "Patas sobrantes: " << sobrantes << endl;
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
