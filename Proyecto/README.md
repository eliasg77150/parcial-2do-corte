# Registro Académico

Proyecto en C++ que implementa la clase `RegistroAcademico` (nombre, créditos aprobados,
promedio ponderado, notas y créditos por nota) y un programa principal que simula el cierre
de un semestre para varios estudiantes almacenados en un `std::vector`.

## Estructura
```
Proyecto/
├── CMakeLists.txt
├── Doxyfile
├── include/RegistroAcademico.h
├── src/RegistroAcademico.cpp
├── src/main.cpp
└── docs/   (documentación generada por Doxygen)
```

## Compilación
```bash
mkdir build && cd build
cmake ..
cmake --build .
```

## Ejecución
```bash
./registro        # en Windows: registro.exe (o Debug\registro.exe)
```

### Ejemplo
```
Nombre del estudiante 1: Ana
Cantidad de materias cursadas: 2
Materia 1 - nota (0 a 5): 4.0
Materia 1 - creditos: 3
Materia 2 - nota (0 a 5): 2.5
Materia 2 - creditos: 2
...
Creditos requeridos para continuar: 3

Estudiante: Ana
  Promedio ponderado: 3.4
  Cumple los requisitos
```

## Documentación
```bash
doxygen Doxyfile
```
Abre `docs/index.html` en el navegador.
