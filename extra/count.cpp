#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<int> a = {1, 2, 3, 1, 1, 2};
  int count = 0;
  for (int i : a)
  {
    if (i == 1)
      count += 1;
  }
  cout << "COUNTING OF 1s: " << count << endl;
}