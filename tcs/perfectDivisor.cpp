#include <bits/stdc++.h>
using namespace std;

int main()
{
  int tc;
  cin >> tc;
  while (tc--)
  {
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
      if (n % i == 0)
      {
        sum = sum + i;
      }
    }

    if (sum == n)
    {
      cout << n << " " << "is a perfect number" << endl;
    }
    else
    {
      cout << n << " " << "is not a perfect number" << endl;
    }
  }
  return 0;
}