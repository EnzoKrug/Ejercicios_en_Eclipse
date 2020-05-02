#include <stdio.h>
#include <stdlib.h>
#include "utn.h"
#define T 5


int main ()
{

    system("color F0"); //Manera para cambiar de color la consola.
    eAlumno listaAlumnos[T]= {{100, 7, 9, 8, "Maria", "maria@gmail.com",{10,2,1990},100,OCUPADO},
                              {101, 10, 10, 10, "Juan","juan@gmail.com",{15,12,1996},100,OCUPADO},
                              {102, 7, 7, 7, "Ana", "ana@gmail.com",{7,2,1999},101,OCUPADO},
                              {104, 10, 10, 10, "Ana", "ana1@gmail.com",{14,3,1990},102,LIBRE},
                              {105, 8, 8, 8, "Ana","ana2@gmail.com",{1,1,1990},101,OCUPADO}};

    eCurso listaCursos[3] = {{100,"Java",10},{101,"Inkscape",5},{102,"Office",8}};
    int opcion;
    int i;
    //inicializarAlumnos(listaAlumnos, T);


     /*l1. Listado de alumnos con la descripción del curso.
    l2. Listado de cursos con todos sus alumnos.
    l3. El usuario elige un curso, y listamos todos sus alumnos.
    4. Cantidad de alumnos que cursan Java.
    5. Sumatoria de horas de cada curso, en función de los alumnos que lo cursan.
    Por ejemplo. Si a duración de java es 7 Hs, y hay 5 alumnos que eligen ese
    curso debería mostrar Java: 35 Hs
    6. El promedio de Nota 2 para los alumnos de un curso elegido por el usuario.
    7. El curso más elegido.
    usan el array de int para sacar la frecuencia de cursos seleccionados
    acumulando por cada indice de curso,
     la cantidad de llamadas a cada indice de curso
     una funcion de tabla temporal intermedia*/
    do
    {
      printf ("1.Cargar un ALUMNO\n");
      printf ("2.Eliminar un ALUMNO\n");
      printf ("3.Modificar un ALUMNO\n");
      printf ("4.Listar ALUMNOS\n");
      printf ("5.Ordenar ALUMNOS\n");
      printf ("6.Mostrar CURSOS\n");
      printf ("7.Mostrar ALUMNOS CON SU CURSO\n");
      printf ("8.Mostrar CURSOS CON SUS ALUMNOS\n");
      printf ("9.Mostrar CURSO ESPECIFICO CON SUS ALUMNOS\n");
      printf ("10.MAS OPCIONES\n");
      printf ("11.SALIR\n");
      printf ("ELIJA UNA OPCION: ");
      scanf ("%d", &opcion);
      switch (opcion)
      {
        case 1:
          printf ("CARGA DE DATOS:\n");
          cargarListadoDeAlumnos (listaAlumnos, T);
          break;
        case 2:
         eliminarAlumno(listaAlumnos,T);
          break;
          break;
        case 3:
        modificarAlumno(listaAlumnos,T);
          break;
        case 4:
          printf ("MUESTRO LISTA DE ALUMNOS\n");
          mostrarListadoDeAlumnos (listaAlumnos, T);
          break;
        case 5:
          printf ("LISTADO ORDENADO:\n");
          ordenarListadoDeAlumnosPorNombre (listaAlumnos, T);
          break;
         case 6:
          for(i=0; i<3; i++)
          {
              printf("%4d %15s %4d\n", listaCursos[i].idCurso, listaCursos[i].descripcion, listaCursos[i].duracion);
          }
         break;
         case 7:
            mostrarAlumnosConSuCurso(listaAlumnos, T, listaCursos, 3);
         break;
         case 8:
            mostrarCursosConSusAlumnos(listaAlumnos,T,listaCursos,3);
            break;
         case 9:
            break;
         case 10:
            break;
        }

    }while (opcion != 11);



    /* printf("CARGO LISTA DE ALUMNOS\n");
     //cargarListadoDeAlumnos(listaAlumnos,T);
     printf("MUESTRO LISTA DE ALUMNOS\n");
     mostrarListadoDeAlumnos(listaAlumnos,T);
     printf("MUESTRO LISTA DE ALUMNOS PROMOCIONADOS\n");
     mostrarListadoDeAlumnosPromocionados(listaAlumnos, T, 6);
     printf("MUESTRO LISTA DE ALUMNOS ORDENADO POR NOMBRE\n");
     ordenarListadoDeAlumnosPorNombre(listaAlumnos,T);
     mostrarListadoDeAlumnos(listaAlumnos,T);
     printf("MUESTRO LISTA DE ALUMNOS ORDENADO POR NOMBRE Y LUEGO POR PROMEDIO\n");
     ordenarListadoDeAlumnosPorNombreYporPromedio(listaAlumnos,T);
     mostrarListadoDeAlumnos(listaAlumnos,T);
     printf("MUESTRO LISTA DE ALUMNOS CON MAYOR PROMEDIO\n");
     mostrarAlumnosConMaximoPromedio(listaAlumnos,T); */


    return 0;
}

