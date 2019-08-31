//Programa que valide si el numero ingresado es de tipo entero o de tipo flotante
//Requerimentos:
//Costo de adquisicion
//Vijencia
//-tecnologica
//Normativa
//Alcance
//Eficiencia
//Escalabilidad
//Garantia de soporte
//Seguridad
//Facilidad de uso
#include <string>
#include <iostream>
#include <limits>
#include <cmath>
#include<stdlib.h>
#include <cctype>
using namespace std;
//El programa funciona perfectamente en en compiladores con c++11




class validacion {
private:
	bool es_Un_Numero(std::string const& numero) {
		bool Regreso = false;

		try
		{
			std::size_t pos = 0;
			std::stof(numero,&pos);

			// Verificamos que se ha procesado todo el contenido de numero
			Regreso = ( pos == numero.length() );
		}

		catch(std::exception const&)
		{
			// 1234e1000 -> std::Dentro del rengo de programa
			// HOLA      -> std::Invalido
		}

		return Regreso;
	}
public:
	float convierte_en_numero(char valor[8]) {
		char salida = 'l';
		float el_Numero;
		bool validacion ;
			do {
						if (salida == 'S' || salida == 's') { // en caso de una vueta y continuan pide un nuevo valor
							std::cout << "ingresa un valor valido" << '\n';
							std::cin >> valor;
							system("cls");
						}

				validacion = es_Un_Numero(valor); // guarda en la variable de entorno(validacion) la validacion de si es un numero o una linea de caracteres

				if (validacion == true) { // en caso de ser true la validacion convierte la cadena de texto en un valor numerico
					el_Numero = atof(valor);
					return el_Numero;
				}
				if(validacion == false) {
					std::cout << "Valor invalido" << '\n';
					system("pause");
					system("cls");
					std::cout << "Continuar\n[S]i o [N]o " << '\n';
					std::cin >> salida;
					system("cls");
				}
			} while(salida == 'S' || salida == 's');
			std::cout << "adios :b" << '\n';
			exit(EXIT_SUCCESS); //termina el proceso si escojio la opcion
	}
};


	class Algoritmo {
	private:

	public:
		bool Tipo_de_dato(float f){ //Resta el entero del flotante, si no da 0 es que es flotante y regresa un 1
			int ent = 0;
			ent = f;

			if(f - ent != 0) {
				return 1;
			}
			else {
				return 0;
			}
		}
		void imprime_Que_Es(bool tipo_De_Valor) { // con la funcion Tipo_de_dato valida si es flotante o entero y solo imprime el tipo de dato que es
			if (tipo_De_Valor == 1) {

				std::cout << "Es de tipo Flotante" << '\n';
			} else {
				std::cout << "Es de tipo Entero" << '\n';
			}
		}

	};


int main() {
	char valor[8], salida = 'P';
	bool tipo_De_Valor;
	float numero;


	Algoritmo algoritmo;
	validacion valida;
	do {
	numero = 0;
	cout << "Ingresa un valor" << '\n';
	fflush( stdout) ;
	cin >>  valor;
	system("pause");
	system("cls");
	numero = valida.convierte_en_numero(valor);
	tipo_De_Valor = algoritmo.Tipo_de_dato(numero);
	algoritmo.imprime_Que_Es(tipo_De_Valor);
	system("pause");
	system("cls");
	std::cout << "Desea probar otro numero\n[S]i o [N]o" << '\n';
	fflush( stdout) ;
	std::cin >> salida;
	system("cls");
	} while(salida == 'S' || salida == 's');
	std::cout << "Adios :b" << '\n';
  return 0;
}
