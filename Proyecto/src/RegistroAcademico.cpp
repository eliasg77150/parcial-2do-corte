/**
 * @file RegistroAcademico.cpp
 * @brief Implementación de la clase RegistroAcademico.
 */
#include "RegistroAcademico.h"
#include <iostream>

RegistroAcademico::RegistroAcademico(std::string nombre)
    : nombre(nombre), creditosAprobados(0), promedioPonderado(0) {}

void RegistroAcademico::registrarNota(float nota, int creditos) {
    // Validaciones
    if (nota < 0 || nota > 5) {
        std::cout << "Nota invalida (debe estar entre 0 y 5).\n";
        return;
    }
    if (creditos <= 0) {
        std::cout << "Creditos invalidos (deben ser mayores que 0).\n";
        return;
    }

    notas.push_back(nota);
    creditosNotas.push_back(creditos);

    // Se aprueba con nota >= 3
    if (nota >= 3) {
        creditosAprobados += creditos;
    }

    // Recalcular promedio ponderado
    float suma = 0;
    int totalCreditos = 0;
    for (size_t i = 0; i < notas.size(); i++) {
        suma += notas[i] * creditosNotas[i];
        totalCreditos += creditosNotas[i];
    }
    promedioPonderado = suma / totalCreditos;
}

float RegistroAcademico::obtenerPromedio() const {
    return promedioPonderado;
}

bool RegistroAcademico::cumpleRequisitos(int creditosRequeridos) const {
    return creditosAprobados >= creditosRequeridos;
}
