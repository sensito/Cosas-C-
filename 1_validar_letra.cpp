#include <iostream>

class caracter {
private:

public:
  void validar (char letra){
    if (letra >= 97 && letra <= 122 ) {
      std::cout << "Tu letra es minuscula" << '\n';
    } else if (letra >= 65 && letra <= 90 ) {
        std::cout << "Tu letra es mayuscula" << '\n';
      } else {
          std::cout << "no es una letra" << '\n';
      }

  }
};

int main(int argc, char const *argv[]) {
  char letra;
  caracter cara;
      std::cout << "Programa de validacion de tipo de letra" << '\n';
      std::cout << "Dame un caracter" << '\n';
      std::cin >> letra;
      cara.validar(letra);
  return 0;
}
