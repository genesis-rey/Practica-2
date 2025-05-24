// clientes cuenta AHORRO-CORRIENTE.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main() {
    int n;
    float ahorro, corriente;
    float totalAhorro = 0, totalCorriente = 0;
    int totalConsignaciones = 0;
    int consignacionesNegativas = 0;

    cout << "Digite el numero de clientes: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << "\nCliente " << i << ":";

        // Consignación en cuenta de ahorros
        cout << "\n  Ingrese monto en cuenta de ahorros: ";
        cin >> ahorro;
        if (ahorro < 0) {
            cout << "  >> Monto negativo ignorado.\n";
            consignacionesNegativas++;
        }
        else {
            totalAhorro += ahorro;
            totalConsignaciones++;
        }

        // Consignación en cuenta corriente
        cout << "  Ingrese monto en cuenta corriente: ";
        cin >> corriente;
        if (corriente < 0) {
            cout << "  >> Monto negativo ignorado.\n";
            consignacionesNegativas++;
        }
        else {
            totalCorriente += corriente;
            totalConsignaciones++;
        }
    }

    // Calcular porcentaje de consignaciones negativas
    float porcentajeNegativas = 0;
    int totalIntentos = totalConsignaciones + consignacionesNegativas;
    if (totalIntentos > 0) {
        porcentajeNegativas = (consignacionesNegativas * 100.0) / totalIntentos;
    }

    // Resultados
    cout << "\n==============================";
    cout << "\nTotal consignado en cuentas de ahorro: $" << totalAhorro;
    cout << "\nTotal consignado en cuentas corrientes: $" << totalCorriente;
    cout << "\nPorcentaje de consignaciones negativas: " << porcentajeNegativas << "%" << endl;
    cout << "==============================\n";

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
