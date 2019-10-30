#include <iostream>
using namespace std;

float pi = 3.1416;
int main()
{
    int radio;
    cout <<"Ingrese el valor del radio:"<< endl;
    cin >> radio;

    cout <<"El perimetro es:" << pi * (2 * radio) << endl;
    cout <<"El diametro es:" << 2 * radio << endl;
    cout <<"El area es:" << pi * (radio * radio) << endl;

system ("pause");

  return 0;
}
