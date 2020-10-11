#include <iostream>
using namespace std;
void sort(int &a, int &b)
{
  int temp = a;
  a = b;
  b = a;
}
int main()
{
  cout << "ENTER TWO NUMBERS\n";
  int a, b;
  cin >> a >> b;
  cout << "A: " << a << " B: " << b << endl;
  sort(a, b);
  cout << "A: " << a << " B: " << b << endl;
}