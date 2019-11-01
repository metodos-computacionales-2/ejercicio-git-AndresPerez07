#include <iostream>
using namespace std;

int main()
{

int *nums = new int [3];

cout << "Ingrese tres numeros enteros" << endl;
cin >> nums[0];
cin >> nums[1];
cin >> nums[2];

for (int i = 0; i < 3; i++) {
  cout << "num" << i+1 << "= " << nums[i] << endl;
}


  return 0;
}
