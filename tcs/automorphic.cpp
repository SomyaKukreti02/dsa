#include <bits/stdc++.h>
using namespace std;

bool isAutomorphic(int n)
{
  int square = n * n;

  while (n > 0)
  {
    if (n % 10 != square % 10)
    {
      return false;
      n = n / 10;
      square = square / 10;
    }
    return true;
  }
}

int main()
{
  int tc;
  cin >> tc;
  while (tc--)
  {
    int n;
    cin >> n;
    if (isAutomorphic(n))
    {
      cout << "automorphic number" << endl;
    }
    else
    {
      cout << "not automorphic number";
    }
  }
}