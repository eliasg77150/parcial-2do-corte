/**
 * @file RegistroAcademico.h
 * @brief Declaración de la clase RegistroAcademico.
 */
#ifndef REGISTROACADEMICO_H
#define REGISTROACADEMICO_H

#include <string>
#include <vector>

/**
 * @class RegistroAcademico
 * @brief Registro académico de un estudiante con notas y créditos.
 */
class RegistroAcademico {
private:
    std::string nombre;              ///< Nombre del estudiante.
    int creditosAprobados;           ///< Créditos de las materias aprobadas.
    float promedioPonderado;         ///< Promedio ponderado por créditos.
    std::vector<float> notas;        ///< Notas registradas.
    std::vector<int> creditosNotas;  ///< Créditos de cada nota.

public:
    /**
     * @brief Constructor.
     * @param nombre Nombre del estudiante.
     */
    RegistroAcademico(std::string nombre);

    /**
     * @brief Registra una nota con sus créditos y actualiza el promedio.
     * @param nota Nota entre 0 y 5.
     * @param creditos Créditos de la materia (mayor que 0).
     */
    void registrarNota(float nota, int creditos);

    /**
     * @brief Obtiene el promedio ponderado.
     * @return Promedio ponderado por créditos.
     */
    float obtenerPromedio() const;

    /**
     * @brief Indica si el estudiante cumple los créditos requeridos.
     * @param creditosRequeridos Créditos mínimos aprobados.
     * @return true si los créditos aprobados son suficientes.
     */
    bool cumpleRequisitos(int creditosRequeridos) const;
};

#endif
