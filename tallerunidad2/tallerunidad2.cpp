#include "iostream"
#include "conio.h"
#include "cstdlib"
#include "stdio.h"
using namespace std;

void InicializarArreglo(char digitos[], int limite)
{
    for (int indice = 0; indice < limite; indice++)
    {
        digitos[indice] = '\0';
    }
}

bool ComprobarDigitos(char digitos[], int limite)
{
    int indice = 0;
    bool esValido = true;

    while (indice < limite && digitos[indice]!=0)
    {
        if (!(isdigit(digitos[indice])))
        {
            esValido = false;
            break;
        }

        indice++;
    }

    return esValido;
}

int PosicionesUtilizadas(char digitos[], int limite)
{
    int indice = 0;
    while (digitos[indice] != '\0' && indice<limite)
    {
        indice++;
    }

    return indice;
}


int ConvertirNumero(char digitos[], int limite)
{
    int numero = 0;
    int posicionesUtilizadas = 0;
    posicionesUtilizadas = PosicionesUtilizadas(digitos, limite);
    int base = 1;

    for (int indice = posicionesUtilizadas-1; indice >= 0; indice--)
    {
        numero = numero + ((digitos[indice] - 48)*base);
        base = base * 10;
    }

    return numero;

}

int main(){
    const int limite = 5;
    char arregloDigitos[limite];
    int numero;

    InicializarArreglo(arregloDigitos, limite);

    cout << "Vamos a evaluar si un numero es menor que 10 \n" << endl;
    cout << "Ingrese un numero por favor..." << endl;
    cin >> arregloDigitos;

    if (ComprobarDigitos(arregloDigitos, limite)) {

        numero = ConvertirNumero(arregloDigitos, limite );

        if (numero < 10){
            cout << "El numero es menor que 10." << endl;
        }
        else if (numero == 10){
            cout << "El numero es 10." << endl;
        }
        else if (numero > 10){
            cout << "El numero es mayor que 10." << endl;
        }
    }

    else {
        cout << "Eso no es un numero!" << endl;
    }

    system("pause");
    return 0;
}



