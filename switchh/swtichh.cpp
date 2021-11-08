/*Autor: 		Luis
 *Fecha:		2/07/2021
 *Descripción: 	Demostrar el uso de la sentencia SWITCH
 *Versión:		1.0
 */

/** ------------SINTAXIS-------------
 *
 * switch(opción)    opción --> la variable a comparar
 * {
 * 		case valor1: cout << "escogio la opcion1";
 * 		break;
 *
 * 		case valor2: cout << "escogio la opcion1";
 * 		break;
 *
 * 		case valor3
 * 		{
 *
 * 		}
 * 		break;
 *
 * 		case valor_n:
 * 		break;
 *
 * 		default:  cout << "Usted no ha escogido una opción"; //Bloque de instrucciones por defecto
 * }
 *
 */



// inlcuir librerias

#include "iostream"
#include "string"

using namespace std;


int main(void)
{

	cout << "BIENVENIDO \n1. Retiro de cuenta ahorrros\n2. Retiro de cuenta corriente \n3. Consulta de saldo";
	cout << "\nEscoga una opción por favor: ";
	char opcion;
	cin >> opcion;

	switch(opcion)
	{

		case 'a':
		{
			cout << "Usted ha escogido la opción 1\n";
			cout << "su cuenta de ahorros esta vacia";
		}
		break;

		case 'b':
		{
			int clave;
				cout << "INGRESE LA CONTRASEÑA DE 4 DIGITOS: ";
				cin >> clave;

				string usuario = "";
				cout << "INGRESE SU USUARIO POR FAVOR: ";
				cin >> usuario;


				if(clave == 1234 || usuario == "Luis")
				{
					cout << "CORRECTO\n";
				}

				else
				{
					cout << "INCORRECTO";
				}
		}
		break;

		case 'c': cout << "Usted ha escogido la opción 3";
		break;

		default: cout << "Usted ha escogido una opción incorrecta";

	}


}
