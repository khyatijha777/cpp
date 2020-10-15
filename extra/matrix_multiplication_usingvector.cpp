#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> mul(vector<vector<int>> a, vector<vector<int>> b)
{
  vector<vector<int>> c[3][3];
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      for (int k = 0; k < 3; k++)
      {
        c[i][j] = a[i][j] * b[k][i];
      }
    }
  }
  return c;
}
int main()
{
  vector<vector<int>> a{{1, 2, 3}, {2, 3, 4}, {2, 3, 4}};
  vector<vector<int>> b{{1, 2, 3}, {2, 3, 4}, {2, 3, 4}};
  vector<vector<int>> c = mul(a, b);
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      cout << (c[i][j]);
    }
  }
}