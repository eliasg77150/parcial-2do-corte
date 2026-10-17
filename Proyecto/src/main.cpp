/**
 * @file main.cpp
 * @brief Programa principal: simula el cierre de semestre de dos estudiantes.
 */
#include <iostream>
#include <string>
#include <vector>
#include "RegistroAcademico.h"

using namespace std;

int main() {
    vector<RegistroAcademico> estudiantes;
    vector<string> nombres;

    cout << "=== Cierre de semestre ===\n";

    for (int i = 1; i <= 2; i++) {
        string nombre;
        int materias;

        cout << "\nNombre del estudiante " << i << ": ";
        cin >> ws;
        getline(cin, nombre);

        RegistroAcademico registro(nombre);

        cout << "Cantidad de materias cursadas: ";
        cin >> materias;

        for (int m = 1; m <= materias; m++) {
            float nota;
            int creditos;
            cout << "Materia " << m << " - nota (0 a 5): ";
            cin >> nota;
            cout << "Materia " << m << " - creditos: ";
            cin >> creditos;
            registro.registrarNota(nota, creditos);
        }

        estudiantes.push_back(registro);
        nombres.push_back(nombre);
    }

    int requeridos;
    cout << "\nCreditos requeridos para continuar: ";
    cin >> requeridos;

    cout << "\n=== Resultados ===\n";
    for (size_t i = 0; i < estudiantes.size(); i++) {
        cout << "Estudiante: " << nombres[i] << "\n";
        cout << "  Promedio ponderado: " << estudiantes[i].obtenerPromedio() << "\n";
        if (estudiantes[i].cumpleRequisitos(requeridos)) {
            cout << "  Cumple los requisitos\n";
        } else {
            cout << "  No cumple los requisitos\n";
        }
    }
    return 0;
}
