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

void selection_sort(vector<int> &a)
{
  int i, j;
  for (j = 0; j < a.size() - 1; j++)
  {
    for (i = j + 1; i < a.size(); i++)
    {
      if (a[i] < a[j])
      {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
      }
    }
  }
}

int main()
{
  vector<int> a;
  int n;
  cout << "enter no of elements in array";
  cin >> n;
  take_input(n, a);
  selection_sort(a);
  show(a);
}