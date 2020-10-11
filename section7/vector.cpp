#include <iostream>
#include <vector>
using namespace std;

//vectors are objects so declaration is little diffrent than the array
//vectors are containers
//vectors are dynamic
//provides bound checking **NOTE: not when using  [] to access values
//must use std:: or namespace to use vector as it is part of standard library
//vecors are OO template class so we must include the  type in <>
int main()
{
  //declarations methods
  //1
  vector<char> vowels;
  //2 provide size ->constructor initialization->elements by default se to  0
  vector<int> allZeros(5);
  //3
  vector<char> consonents{'d', 'l'};
  //4 change default initialization
  vector<int> allOnes(5, 1);
  //5- 2D
  vector<vector<int>> my;

  //Accessing values

  //1
  cout << allOnes[1] << endl;
  //2 vectror syntax
  cout << allZeros.at(0) << endl;
  cin >> allZeros.at(1);
  cout << allZeros.at(1) << endl;

  //Functions
  allZeros.push_back(9);
  cout << allZeros.at(5) << endl;
  cout << "SIZE: " << allZeros.size() << endl;

  //on overflow an exception and error message is generated
  cout << allZeros.at(5) << endl;
}