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
  for (int i = 0; i < a.size(); i++)
  {
    cout << a[i] << " ";
  }
  cout << endl;
}

void insertion_sort(vector<int> &a)
{
  int i, j;
  for (j = 1; j < a.size(); j++)
  {
    i = j - 1;
    int key = a[j];
    while (i <= 0 and a[i] > key)
    {
      a[i + 1] = a[i];
      i -= 1;
    }
    a[i + 1] = key;
  }
}

int main()
{
  vector<int> a;
  int n;
  cout << "enter no of elements in array";
  cin >> n;
  take_input(n, a);
  insertion_sort(a);
  show(a);
}