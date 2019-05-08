#include <iostream>
using namespace std;


class nodo {
  private:
  public:
    int info;
    nodo *sig;

      nodo (){

        sig = NULL;

      }
    nodo (int val){
      info = val;
    }
};

class Lista {
  private:
  public:
    Lista();
    void insertar_inicio();
    void insertar_final();
    void imprimir_lista();
};


int main(int argc, char const *argv[]) {
  nodo *temp;
  int opc;

  Lista metodos_lista;

  do {
    std::cout << "1.-ingresa un al inicio de la lista" << '\n';
    std::cout << "2.-ingresa un valor al final de la lista" << '\n';
    std::cout << "8.-imprime la lista" << '\n';
    std::cout << "9.-salir" << '\n';
      switch (opc) {
        case 1:
        metodos_lista.insertar_inicio();
        break;
        case 2:
        metodos_lista.insertar_final();
        break;
        case 8:
        metodos_lista.imprimir_lista();
        break;
        case 9:
        std::cout << "Adios :b" << '\n';
        break;
        default:
        std::cout << "no existe esa opcion .-." << '\n';
        break;
      }
  } while(opc !=9);
  return 0;
}
