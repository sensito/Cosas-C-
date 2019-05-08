#include <iostream>
using namespace std;


class figura_geometricas {
private:


public:
  void linea() {

    int a;
    std::cout << "Dame el largo de la linea" << '\n';
    std::cin >> a;
    for (int i = 0; i < a; i++) {
      std::cout << "*";
    }
    std::cout << '\n' << endl;
    std::cout << "Listo" << '\n';
  }

  void cuadrado() {
    int a;
    std::cout << "dame el largo de tu cuadrado" << '\n';
    std::cin >> a;

    for (int i= 0; i < a; i++) {
      for (int i = 0; i < a; i++) {
        std::cout << "*" ;
      }
      std::cout << '\n';
    }
  }
};

  int main(int argc, char const *argv[]) {

    int opc;
    figura_geometricas mc;

    do {
      std::cout << "1.-linea" << '\n';
      std::cout << "2.-cuadrado" << '\n';
      std::cout << "3.-salida" << '\n';
      std::cin >> opc;

      switch (opc) {
        case 1:
          mc.linea();
        break;
        case 2:
          mc.cuadrado();
        break;
        case 3:
          std::cout << "Adios :b" << '\n';
        break;
        default:
          std::cout << "opcion invalida" << '\n';
        break;
      }
    } while(opc !=3);
    return 0;
  }
