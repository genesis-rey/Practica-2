// numeros terminados (1,2y3) p y q.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main() {
    int p, q;

    cout << "Digite los limites del intervalo:\n";
    cin >> p >> q;

    // Asegurar que ambos sean positivos y p < q
    if (p < 0 || q < 0) {
        cout << "Ambos limites deben ser positivos.\n";
        return 1;
    }

    if (p >= q) {
        cout << "Intercambiando valores ya que p no es menor que q.\n";
        int temp = p;
        p = q;
        q = temp;
    }

    int suma1 = 0;
    int suma2 = 0;
    int contador3 = 0;

    for (int i = p; i <= q; i++) {
        int ultimaCifra = i % 10;

        if (ultimaCifra == 1) {
            suma1 += i;
        }
        if (ultimaCifra == 2) {
            suma2 += i;
        }
        if (ultimaCifra == 3) {
            contador3++;
        }
    }

    // Mostrar resultados
    cout << "\n***** RESULTADOS *****\n";
    cout << "Acumulado numeros terminados en 1: " << suma1 << endl;
    cout << "Suma numeros terminados en 2: " << suma2 << endl;
    cout << "Total numeros terminados en 3: " << contador3 << endl;

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
