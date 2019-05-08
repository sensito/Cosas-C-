#include <iostream>
#ifndef TAM
#define TAM  5
#endif

using namespace std;

class miarreglo {
private:
  void pausa() {
    system ("pause");
  }
  void limpiar() {
    system ("cls");
  }

public:
  llena (int);

    void llena(int a[]){
      for (int i = 0; i < TAM; i++) {
        std::cout << "ingresa el valor para el campo: " << i+1 << '\n';
        std::cin >> a[i];
        limpiar();
      }
    }

  void imprime(int b[]) {
    std::cout << "ar = {";
    for (int i = 0; i < TAM; i++) {
      if (i < TAM-1) {
        std::cout << b[i] << ',';
      } else {
        std::cout << b[i];

      }
    }
    std::cout << "}" << '\n';
      pausa();
      limpiar();
}
};

int main(int argc, char const *argv[]) {
  int ar[TAM],er[TAM];
  miarreglo cosas;
  cosas.llena(ar);
  cosas.imprime(ar);
  cosas.llena(er);
  cosas.imprime(er);

  std::cout << "terminanado :b" << '\n';
  return 0;
}
