#include <iostream>
using namespace std;


class nodo {
  private:
  public:
    int info;
    nodo* sig;
    nodo (){
      sig=NULL;
    }
    nodo(int val){
      info = val;
      sig = NULL;
    }
};

int main() {
  int i,valor_Lista,lista;
  nodo * inicio, *temp;
  inicio = NULL;


  do {
    cout << "de que tama~no quieres tu lista" << '\n';
    cin >> lista;
    if (lista > 0) {
      for (size_t i = 0; i < lista; i++) {
        temp = new nodo;
        cout << "valor de tu lista" << '\n';
        std::cin >> valor_Lista;
        temp -> info = valor_Lista;
        temp -> sig = inicio;
        inicio = temp;
      }
      temp = inicio;

      while (temp != NULL) {
        std::cout << temp -> info << "  ";
        temp = temp -> sig;
      }

    }else if(lista == 0) {
      std::cout << "Tu lista tiene 0 valores" << '\n';
    } else {
      std::cout << "no se aseptan valores negativos" << '\n';
    }

  } while(lista < 0);

  return 0;
}
