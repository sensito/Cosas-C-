#include <iostream>

class calculadora {
private:
  /* data */

public:

  void suma(){
    int a,b;
    std::cout << "dame un numero" << '\n';
    std::cin >> a;
    std::cout << "dame otro numero" << '\n';
    std::cin >> b;
    std::cout << "el resultado es " << a+b <<  '\n';
}
    void resta(){
      int a,b;
      std::cout << "dame un numero" << '\n';
      std::cin >> a;
      std::cout << "dame otro numero" << '\n';
      std::cin >> b;
      std::cout << "el resultado es " << a+b <<  '\n';

}
      void multi(){
        int a,b;
        std::cout << "dame un numero" << '\n';
        std::cin >> a;
        std::cout << "dame otro numero" << '\n';
        std::cin >> b;
        std::cout << "el resultado es " << a+b <<  '\n';
}
};

int main(int argc, char const *argv[]) {
  int opc;

  calculadora calcu;

  do {
  std::cout << "dame una opcion" << '\n';
  std::cout << "1.-suma" << '\n';
  std::cout << "2.-resta" << '\n';
  std::cout << "3.-multiplicacion" << '\n';
  std::cout << "4.-salir" << '\n';
  std::cin >> opc;
  switch (opc) {
    case 1:
    calcu.suma();
    break;
    case 2:
    calcu.resta();
    break;
    case 3:
    calcu.multi();
    break;
    case 4:
    std::cout << "adios :b" << '\n';
    break;
    default:
    std::cout << "opcion no existente" << '\n';
    break;
  }
} while(opc != 4 );
  return 0;
}
