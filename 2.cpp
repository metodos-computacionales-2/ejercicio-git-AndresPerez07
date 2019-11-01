#include <iostream>
using namespace std;

int main()
{

int *nums = new int [3];

cout << "Ingrese tres numeros enteros" << endl;
cin >> nums[0];
cin >> nums[1];
cin >> nums[2];
int cont = 0;
int ix = 0;
for (int i = 0; i < 3; i++) {
  cout << "num" << i+1 << "= " << nums[i] << endl;
  if (nums[i]> cont)
  {
    cont = nums[i];
    ix = i;

  }

}
cout << "El numero mayor es: " << nums[ix] << endl;
int h = nums[ix];
int *cat = new int [2];
int j=0;
int k=0;
while(j < 3)
{
  int temp = nums[j];
  if (temp != h)
  {
    cat[k] = temp;
    k++;
  }
  j++;
}
cout << "catetos: " << cat[0] << ", " << cat[1] << endl;


  return 0;
}
