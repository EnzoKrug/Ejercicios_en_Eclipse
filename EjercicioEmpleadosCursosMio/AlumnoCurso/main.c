#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Libreria.c"
#define TopeAlumnos 10
#define TopeCursos 10
/*
1 listado de alumnos con descripción del curso
2 listado d cursos con todos sus alumnos
3 el usuario elige un curso y listamos todos sus alumnos
4 cantidad de alumnos que cursan java
5 sumatoria de horas de cada curso en funciónn de los alumnos que lo cursan
  por ejemplo si la duraciónn de java es de 7 hs y hay 5 alumnos que eligen ese curso
  debería mostrar ; Java 35 horas
6 el promedio de nota2 para los alumnos de un curso elegido por el usuario
7 el curso más elegido
*/




int main()
{

    eAlumno ListadoAlumnos[TopeAlumnos];
    eCurso ListadoCursos[TopeCursos];

    InicializarArrayAlumnos(ListadoAlumnos,TopeAlumnos);
    InicializarArrayCursos(ListadoCursos,TopeCursos);

    CargarAlumnosDePrueba(ListadoAlumnos,TopeAlumnos);
    CargarCursosDePrueba(ListadoCursos,TopeCursos);
    Menu(ListadoAlumnos,TopeAlumnos,ListadoCursos,TopeCursos);

    return 0;
}

/* -------------------------------------------------------------------------------- */

