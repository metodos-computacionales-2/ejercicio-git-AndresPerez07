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
cout << "Hipotenusa: " << nums[ix] << endl;
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
cout << "Catetos: " << cat[0] << ", " << cat[1] << endl;
if((h^2) == (cat[0]^2 + cat[1]^2))
{
  cout << nums[0] << ", " <<nums[1]<< ", " << nums[2]<< " Pueden ser lados de un triangulo rectangulo"<<endl;
}
else{
  cout << nums[0] << ", " <<nums[1]<< ", " << nums[2]<< " NO pueden ser lados de un triangulo rectangulo"<<endl;
}

  return 0;
}
