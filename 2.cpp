#include <iostream>
using namespace std;

int main()
{

int *nums = new int [3];

cout << "Ingrese tres numeros enteros" << endl;
cin >> nums[0];
cin >> nums[1];
cin >> nums[2];
int cont = nums[0];
int ix = 0;
for (int i = 0; i < 3; i++) {
  cout << "num" << i+1 << "= " << nums[i] << endl;
  if (nums[i]> cont)
  {
    cont = nums[i];
    ix ++;

  }

}
cout << "El numero mayor es: " << nums[ix] << endl;

  return 0;
}
