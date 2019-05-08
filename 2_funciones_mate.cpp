#include <iostream>
using namespace std;



class matematicas {
  private:
  public:
    int factorial(int n) {

      if (n == 0) {
        n = 1;
     } else{
       n = n * factorial(n-1);
     }
     return n;
    }

     int suma(int n) {
       if (n == 0) {
         n = 0;
       } else{
         n = n + suma(n-1);
    }
     return n;
   }
 };

  class menu {
    private:
      void opciones(int opc){
      int n;
      matematicas mate;
        switch (opc) {
          case 1:
            std::cout << "dame el numero del que quieres el factorial" << '\n';
            std::cin >> n;
            std::cout << mate.factorial(n) << '\n';
          break;
          case 2:
            std::cout << "dame el numero que quieres sumar" << '\n';
            std::cin >> n;
            std::cout << mate.suma(n) << '\n';
          break;
        default: std::cout << "mal" << '\n';
        break;

      }
    }
    public:
      int imprimir() {
        int opc;
        matematicas mate;
        std::cout << "escoje un opcion" << '\n';
        std::cout << "1.- factorial" << '\n';
        std::cout << "2.- suma susesiba" << '\n';
        std::cout << "3.- Salir" << '\n';
        std::cin >> opc;

        if (opc != 3) {
          opcion(opc);
        }
        return opc;
      }
};

int main(int argc, char const *argv[]) {
  matematicas mate;
  menu men;
  do {
  } while(men.imprimir() != 3);
      std::cout << "Adios :b" << '\n';
  return 0;
}
