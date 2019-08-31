//PROGRAMA DE QUE CALCULE LAS RAISES CUADRADAS ENTRE 1 Y 1000
// puede ser desimal
// que cumpla con el problema
// que sea eficiente
#include<iostream>
#include<stdlib.h>
#include <cctype>
using namespace std;


class raiz {
	private:
    float recortador_DE_Diferencia_100(float numero) {
    	if (numero <= 100){	numero = 1;}
			if (numero <= 200){	numero = 10;}
		  if (numero <= 300){ numero = 14.1421; }
			if (numero <= 400){ numero = 17.3205;}
			if (numero <= 500){ numero = 20; }
			if (numero <= 600){ numero = 22.3606; }
			if (numero <= 700){ numero = 24.4948; }
			if (numero <= 800){ numero = 26.4575; }
			if (numero <= 900){ numero = 28.2842; }
			if (numero <= 1000){ numero = 30; }
			if (numero == 1000) { numero = 31.62;	}
			return numero;
    };

		float recortador_DE_Diferencia_50(float numero){
			float numero_resta = numero;
			numero_resta - 55;

			numero_resta - numero;
			if (n


		};
	public:
float hacer_La_Raiz (float numero){
// La raiz de un numero es el cuadrado del mismo, por lo que se valida el ejercicio multiplicando un valor 'n'
// hasta que de el resultado correcto el cual guarda en la varieble del entorno y regresa la funcion
	float i, respuesta;
	i = recortador_DE_Diferencia(numero);
	for (size_t i = 0.1;i < numero ; i = i + 0.0001){ // se agregan '0' para una mallor exactitud
		if(i*i <= numero){
		respuesta = i;
		}
	}
	return respuesta;
}
};

class validacion {
private:
	bool es_Un_Numero(const char* cadena){ // validacion de que sea un numero entero
	  for( ; *cadena; ++cadena ){
	    // En cuanto un caracter no sea numérico
	    if( !std::isdigit(*cadena) )
	      return false;
	  }

	  return true;
	}

	bool rango(float n) {
		if (n < 0 || n > 1000) { // valida si el numero que ingresaron esta dentro dek rango valido
			std::cout << "fuera del rango" << '\n';
			return false;
			}
	return true;
	}

public:
	float convierte_en_numero(char valor[5]) {
		char salida = 'l';
		float el_Numero;
		bool validacion, rango_Del_Numero;
			do {
						if (salida == 'S' || salida == 's') { // en caso de una vueta y continuan pide un nuevo valor
							std::cout << "ingresa un valor valido" << '\n';
							std::cin >> valor;
							system("cls");
						}
				validacion = es_Un_Numero(valor); // guarda en la variable de entorno(validacion) la validacion de si es un numero o una linea de caracteres
				if (validacion == true) { // en caso de ser true la validacion convierte la cadena de texto en un valor numerico
					el_Numero = atoi(valor);
					rango_Del_Numero = rango(el_Numero); // guarda en la variable de entorno (rango_Del_Numero) si el numero esta dentro del rango del programa
					if (rango_Del_Numero == true) { // si la verificacion es cierta regresa el numero
						return el_Numero;
					}
				validacion = false; // en caso de que sea una un numero pero no este dentro del rango regresa un false el cual te da la opcion de salir o ingresar un nuevo numero
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


int main(){
	char valor[5];
	float numero, respuesta, prueba;


	raiz algoritmo;
	validacion validar;
	cout << "Programa de raises cuadradas entre 1 y 1000" << '\n';
	system("pause");
	system("cls");
	cout << "Ingresa un valor entre 1 y 1000" << '\n';
	fflush( stdout) ;
	cin >>  valor;
	system("pause");
	system("cls");
	numero = validar.convierte_en_numero(valor);
	respuesta = algoritmo.hacer_La_Raiz(numero);
	respuesta + 0.0001; // cierra un poco el error del programa
	cout << respuesta << '\n';
	cout << "Adios :b" << '\n';
	return 0;
}
