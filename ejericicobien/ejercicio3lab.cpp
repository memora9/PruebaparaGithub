#include "iostream"
#include "string"
#include <iomanip>

using namespace std;


int main(void)

{
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



return 0;
}
