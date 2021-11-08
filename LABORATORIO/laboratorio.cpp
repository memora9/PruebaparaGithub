
/*Autores: 		José Luzuriaga, Mario Mora, Dayana Moreno.
 *Fecha:		12/07/2021
 *Descripción: 	Proyecto Laboratorio Nº1
 *Versión:		1.0
 */


#include<iostream>
#include<conio.h>
#include<fstream>
#include <string>
#include <cstdlib>

using namespace std;

int main(void)
{
	bool repetir = true;
		do {

			system("cls");
			system("Color 0b");
			system("Title Laboratorio Nº1");

		cout<<endl;
		cout<<"Bienvenido \n 1. Ingresar 3 numeros, para luego ordenarlos de menor a mayor.\n 2. Ingresar una letra cualquiera y detectar si es una vocal.\n 3. Verificar su promedio final de notas.";
		cout<<endl;
		cout<<"NOTA: Para volver al menú principal despues de terminar la tarea, presionar enter. Gracias...";
		cout<<endl;
		cout<<"Escoga una opcion porfavor:";
		cout<<endl;

		int opcion = 0;
		cin>>opcion;

		switch(opcion){

	case 1: {
		int n1,n2,n3;

			cout<<"Ingrese el primer número: ";
			cout<<endl;
			cin>>n1;

			cout<<"Ingrese el segundo número: ";
			cout<<endl;
			cin>>n2;

			cout<<"Ingrese el tercer número: ";
			cout<<endl;
			cin>>n3;

			if(n1<n2 && n2<n3){
				cout<<"El orden es: "<<n1<<" "<<n2<<" "<<n3;
			}
			else if(n1<n3 && n3<n2){
				cout<<"El orden es: "<<n1<<" "<<n3<<" "<<n2;
			}
			else if(n2<n1 && n1<n3){
				cout<<"El orden es: "<<n2<<" "<<n1<<" "<<n3;
			}
			else if(n2<n3 && n3<n1){
					cout<<"El orden es: "<<n2<<" "<<n3<<" "<<n1;
			}
			else if(n3<n1 && n1<n2){
					cout<<"El orden es: "<<n3<<" "<<n1<<" "<<n2;
			}
			else if(n3<n2 && n2<n1){
					cout<<"El orden es: "<<n3<<" "<<n2<<" "<<n1;
			}
			cout<<endl;
	}

	system("pause>nul");
	break;

	case 2:{

		string letra = "";
				cout << "Ingrese cualquier letra en mayúscula: ";
				cout<<endl;
				cin >> letra;

				if(letra == "A"||letra == "E"||letra == "I" ||letra == "O" ||letra == "U")
				{
					cout << "La letra es una vocal";
				}

				else
				{
					cout << "La letra no es una vocal";
				}


		}
		cout<<endl;
		system("pause>nul");
		break;

	case 3:{

		float x,y,z,j,k,calf;

		cout << "Ingresa la primera nota: ";
		cin >> x;

		cout << "Ingresa la segunda nota: ";
		cin >> y;

		cout << "Ingresa la tercera nota: ";
		cin >> z;

		cout << "Ingresa la cuarta nota: ";
		cin >> j;
		cout << "Ingresa la quinta nota: ";
		cin >> k;

		calf = (x+y+z+j+k)/5;


		cout << "Tu promedio final es: "<<calf<<endl;

		if (calf >= 14 ){
			cout << "Usted esta Aprobado";
		}
		else {
			cout <<"Usted esta Reprobado";
			cout<<endl;

			system("pause");
		}
		cout<<endl;
	}
	system("pause>nul");
	break;

	default:
	cout<<"Usted escogido una opcion incorrecta...";
	cout<<endl;
	system("pause>nu1");
	}
	}
		while (repetir);


	return 0;
}
