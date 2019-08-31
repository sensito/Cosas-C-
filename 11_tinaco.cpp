#include <iostream>
#include <stdlib.h>
using namespace std;

class tinaco {
private:
  bool esUnNumero(const char* cadena){
  for( ; *cadena; ++cadena ){
    // En cuanto un caracter no sea numérico manda error
    if( '0' >= *cadena || '9' <= *cadena )
      return false;
  }
  return true; // si todos los valores que agrego el usuario son numericos manda un true
}
public:

  float convierte_A_Numero(char valor[9]){
    char opcion = 'P';
    float n;
    bool validacion;
    do {
        if (opcion == 'S') { // dado un ciclo de error, si deseas continuar entra por un nuevo valor numerico
          std::cout << "Ingresa un valor valido" << '\n';
          std::cin >> valor;
          system("cls");
        }
        validacion = esUnNumero(valor);
        if (validacion == true) { // si el valor ingresado todos son numeros lo guarda en una variable y lo
          // regresa para ser guardado en su correspondiene variable
          n = atoi(valor);
          return n;

        }
      //  validacion = false;
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

};

class unidades {
private:
public:
  float convierte_A_C(float a){
    a = a / 100;
    return a;
  }

  float convierte_A_Radio(float a){
    a = a / 2;
    return a;
  }
  float capacidad(float Diametro, float altu){
    float Volu;
    Volu = Diametro * Diametro * altu * 3.14;
    return Volu;
  }
};




int main(int argc, char const *argv[]) {
  char valor[9];
  float Altu,Diametro,Volu;
  tinaco volumen;
  unidades cambio;

  std::cout << "Ejercicio 2: Litros de un tinaco\nAlgoritmos computacionales" << '\n';
  system("pause");
  system("cls");
  std::cout << "Ingresa la altura de tu tinaco" << '\n'; // Ingresar, validar y guarda
  std::cin >> valor;
  system("cls");
  Altu = volumen.convierte_A_Numero(valor);
  Altu = cambio.convierte_A_C(Altu);
  std::cout << "Ingresa el diametro de tu tinaco" << '\n'; // Ingresar, validar y guardar la segunda calificacion
  std::cin >> valor;
  system("cls");
  Diametro = volumen.convierte_A_Numero(valor);
  Diametro = cambio.convierte_A_C(Diametro);
  Diametro = cambio.convierte_A_Radio(Diametro);
  Volu = cambio.capacidad(Diametro, Altu);
  std::cout << "La capacidad de tu tinaco es: " << Volu << '\n';
  system("pause");
  system("cls");
  std::cout << "Adios :b" << '\n';
  return 0;
}
