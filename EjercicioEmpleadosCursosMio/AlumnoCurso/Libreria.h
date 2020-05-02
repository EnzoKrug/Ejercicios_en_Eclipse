


typedef struct
{
    int legajo;
    char nombre[30];
    char apellido[30];
    int nota1;
    int nota2;
    float promedio;
    int estado;
    int idCurso;
} eAlumno;

typedef struct
{
    int idCurso;
    char nombre[30];
    int horas;
    int estado;
}eCurso;


void inputString(char mensaje[], char salida[], int tam);
int inputInt(char mensaje[]);
float inputFloat(char mensaje[]);
int ObtenerEleccionDeMenu(char menu[],int desde,int hasta);
void InicializarArrayAlumnos(eAlumno lista[], int tam);
int ContarOcupados(eAlumno lista[],int tam);
int BuscarLibre(eAlumno lista[],int tam);
int CargarAlumno(eAlumno lista[],int tam);
int MostrarAlumnos(eAlumno lista[],int tam,int ConSubindices, eCurso listaC[], int tamC);
void Menu(eAlumno listaA[],int tamA, eCurso listaC[],int tamC);
int ModificarAlumnos(eAlumno lista[],int tam , eCurso listaC[] , int tamC);
int BorrarAlumnos(eAlumno lista[],int tam,eCurso listaC[] , int tamC);
int CargarAlumnosDePrueba(eAlumno lista[],int tam);
//============================================================================================================
void InicializarArrayCursos(eCurso lista[], int tam);
int CargarCursosDePrueba(eCurso lista[],int tam);
int MostrarCursos(eCurso lista[],int tam,int ConSubindices);
int BuscarLibreCursos(eCurso lista[],int tam);
int CargarCurso(eCurso lista[],int tam);
int ContarOcupadosCursos(eCurso lista[],int tam);
int BorrarCursos(eCurso lista[],int tam);
int ModificarCursos(eCurso lista[],int tam);
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
void AsignarCursoAAlumno(eAlumno listaA[], int tamA, eCurso listaC[] , int tamC);
void NombreDeCursoPorID(eCurso listaC[], int tamC,int ID,char resultado[]);
//1 listado de alumnos con descripción del curso
void ListadoDeAlumnosConDescripCurso(eAlumno listaA[], int tamA, eCurso listaC[], int tamC);

//2 listado d cursos con todos sus alumnos
void ListadoCursoConTodosSusAlumnos(eAlumno listaA[], int tamA, eCurso listaC[], int tamC);
//3 el usuario elige un curso y listamos todos sus alumnos
int IngresandoCursoListarTodosSusAlumnos(eAlumno listaA[], int tamA, eCurso listaC[], int tamC);
//4 cantidad de alumnos que cursan java
int IngresandoCursoContarCantidadAlumnos(eAlumno listaA[], int tamA, eCurso listaC[], int tamC);
/*
5 sumatoria de horas de cada curso en funciónn de los alumnos que lo cursan
  por ejemplo si la duraciónn de java es de 7 hs y hay 5 alumnos que eligen ese curso
  debería mostrar ; Java 35 horas
  */
void SumatoriaDeHorasDeCursosEnFuncionACantidadDeAsignados(eAlumno listaA[], int tamA, eCurso listaC[], int tamC);

//6 el promedio de nota2 para los alumnos de un curso elegido por el usuario
int IngresandoCursoPromedioDeNOTA2deAsignados(eAlumno listaA[], int tamA, eCurso listaC[], int tamC);

void MayorFrecuenciaCurso(int Frecuencia[], eCurso listaC[],int tamC);


