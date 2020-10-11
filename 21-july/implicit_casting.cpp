#include <iostream>
using namespace std;

int main()
{
  char name = 'k';
  cout << name << endl;
  int age = 'a';
  // char converted to int is ascii value of char
  double d = 322.9;
  int i;
  cout << "AGE " << age;
  i = d;
  cout << endl
       << "NUM " << i;
  cout << endl;
  return 0;
}
