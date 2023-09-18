#include <stdio.h>
#include "hashmap.h"
#include "list.h"
//----------------------------------------------------------------
//                            Estructuras                        |
//----------------------------------------------------------------
typedef struct PuntoInteres{
  char nombre[51];
  char tipo[51];
  char direccion[51];
  char horario[51];
  char description[51];
} PuntoInteres;

typedef struct Turista{
  char pasaporte[51];
  char nombre[51];
  char pais[51];
  List* lugaresFav;
} Turista;
//----------------------------------------------------------------
//                   Funciones de implementación                 |
//----------------------------------------------------------------

//Esta función es para evitar que se exceda el tamaño especificado de la cadena y para eliminar cualquier carácter de salto de línea residual en el búfer de entrada después de la lectura. 
void leerCadena51(char cadena[51]){
  scanf("%50[^\n]s",cadena);
  getchar();
}
/*
//
void registrarPunto(List* lista){}

//
void mostrarDatosPuntos(List* lista){}

//
void eliminarPunto(List* lista){}

//
void registrarTurista(List* lista){}

//
void agregarLugarFavATurista(List* lista){}

//
void mostrarTuristasXPais(List* lista){}

//
void mostrarPuntosDeUnTipo(List* lista){}

//
void importarPuntosYTuristasDesdeCSV(List* lista){}

//
void exportarPuntosYTuristasACSV(List* lista){}

*/
//----------------------------------------------------------------
//                      Funciones Principal                      |
//----------------------------------------------------------------
int main(){
  
  int opcion = -1; 

  while(opcion!=0){
      printf("------------------------------------------\n");
      printf("           Información Turística\n");
      printf("------------------------------------------\n\n");
      printf("1. Registrar punto de interés\n");
      printf("2. Mostrar datos de punto de interés\n");
      printf("3. Eliminar punto de interés\n");
      printf("4. Registrar turista\n");
      printf("5. Agregar lugar favorito a turista\n");
      printf("6. Mostrar turistas por país\n");
      printf("7. Mostrar todos los puntos de interés de un tipo\n");
      printf("8. Importar puntos de interés y turistas desde archivos CSV\n");
      printf("9. Exportar puntos de interés y turistas a archivos CSV\n");
      printf("0. Salir\n\n");
      printf("Selecciona una opción: ");
      scanf("%d",&opcion);
      
      switch(opcion){
          case 1:
            // Registrar punto de interés
            //registrarPunto();
            break;
          case 2:
            // Mostrar datos de punto de interés
            //mostrarDatosPuntos();
            break;
        case 3:
            // Eliminar punto de interés
            //eliminarPunto();
            break;
        case 4:
            // Registrar turista
            //registrarTurista();
            break;
        case 5:
            // Agregar lugar favorito a turista
            //agregarLugarFavATurista();
            break;
        case 6:
            // Mostrar turistas por país
            //mostrarTuristasXPais();
            break;
        case 7:
            // Mostrar todos los puntos de interés de un tipo
            //mostrarPuntosDeUnTipo();
            break;
        case 8:
            // Importar puntos de interés y turistas desde archivos CSV
            //importarPuntosYTuristasDesdeCSV();
            break;
        case 9:
            // Exportar puntos de interés y turistas a archivos CSV
            //exportarPuntosYTuristasACSV();
            break;
        case 0:
            // Finalizar programa 
            printf("\n¡Hasta luego!\n");
            break;
        default:
            printf("\nOpción inválida. Por favor, selecciona una opción válida :D.\n");
            break;
      }
    }

  // Liberar memoria de la biblioteca y las reservas
  //free();
  return 0;
}