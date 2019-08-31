#include <iostream>
#include <stdlib.h>
using namespace std;

class numeros {
private:
  bool esUnNumero(const char* cadena){
  for( ; *cadena; ++cadena ){
    // En cuanto un caracter no sea numérico manda error
    if( '0' > *cadena || '9' < *cadena )
      return false;
  }
  return true; // si todos los valores que agrego el usuario son numericos manda un true
}
public:

  double convierte_A_Numero(char valor[3]){
    char opcion = 'P';
    int n;
    bool validacion;
    do {
        if (opcion == 'S') { // dado un ciclo de error, si deseas continuar entra por un nuevo valor numerico
          std::cout << "Ingresa la calificacion" << '\n';
          std::cin >> valor;
          system("cls");
        }
        validacion = esUnNumero(valor);
        if (validacion == true) { // si el valor ingresado todos son numeros lo guarda en una variable y lo
          // regresa para ser guardado en su correspondiene variable
          n = atoi(valor);
          if (n <= 10 && n >= 0) { //validacion de rango maximo
            return n;
          }
          validacion = false;
        }
        if(validacion == false){
            std::cout << "valor invalido" << '\n';
            system("pause");
            system("cls");
            std::cout << "Deseas continuar [S]i o [N]o" << '\n';
            std::cin >> opcion;
            system("cls");
          }
    } while(opcion == 'S' || opcion == 's');
    std::cout << "Adios :b"; // si no desea continuar el usuario  sale del programa
    exit(EXIT_SUCCESS);
  }

  int selecciona_Num_Max(int a,int b, int c){ // algoritmo de numero maximo
    int max;
    max = a;
    if (max < b) max = b;
    if (max < c) max = c;
    return max;
  }
};




int main(int argc, char const *argv[]) {
  char valor[3];
  int a,b,c,max;
  numeros maximo;

  std::cout << "Ejercicio 1: Mayor calificacion\nAlgoritmos computacionales." << '\n';
  system("pause");
  system("cls");
  std::cout << "Ingresa la calificacion del primer parcial:" << '\n'; // Ingresar, validar y guardar la primer calificacion
  std::cin >> valor;
  system("cls");
  a = maximo.convierte_A_Numero(valor);
  std::cout << "Ingresa la calificacion del segundo parcial:" << '\n'; // Ingresar, validar y guardar la segunda calificacion
  std::cin >> valor;
  system("cls");
  b = maximo.convierte_A_Numero(valor);
  std::cout << "Ingresa la calificacion del tercer parcial:" << '\n'; // Ingresar, validar y guardar la tercer calificacion
  std::cin >> valor;
  system("cls");
  c = maximo.convierte_A_Numero(valor);
  max = maximo.selecciona_Num_Max(a, b, c);
  std::cout << "La mayor calificacion de los 3 parciales es: " << max << '\n';
  system("pause");
  system("cls");
  std::cout << "Adios :b" << '\n';
  return 0;
}
