#include <iostream>
using namespace std;
#include <vector>

vector<int> take_input(int n, vector<int> &v)
{
  int a;
  for (int i = 0; i < n; i++)
  {
    cin >> a;
    v.push_back(a);
  }
  return v;
}

void show(vector<int> a)
{
  for (int i : a)
  {
    cout << i << " ";
  }
  cout << endl;
}

int main()
{
  vector<int> a;
  int n;
  cout << "enter no of elements in array";
  cin >> n;
  take_input(n, a);
  show(a);
}