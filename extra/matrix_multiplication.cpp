#include <iostream>
using namespace std;
int *mul(int *a[3][3], int *b[3][3])
{
  int c[3][3]{0};
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      for (int k = 0; k < 3; k++)
      {
        c[i][j] = *a[i][j] * *b[k][i];
      }
    }
  }
  return *c;
}
int main()
{
  int a[][] = {{1, 2, 3}, {2, 3, 4}};
  int b[][] = {{1, 2, 3}, {2, 3, 4}};
  int *c = mul(a, b);
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      cout << *(c[i][j]);
    }
  }
}