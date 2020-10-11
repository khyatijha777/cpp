#include <iostream>
using namespace std;

/*****************
* Arrays are compound data type
* Array contains single datatype
 * Arrays are fixed in size
 * all elements are same type
 * stored continuously in memory
 * index start at 0
 * Arrays has no bounds check 
 **************/

int main()
{
  int a[3] = {1, 4, 5}; //similar to int a[3] {1, 4, 5};
  cout << a[0] << endl;

  int b[2]{0};
  cout << b[1] << endl;

  //first element is 4 rest are initialized to 0
  int c[3] = {4};
  cout << c[1] << endl;

  //assignment
  c[1] = 9;
  cout << c[1] << endl;
}