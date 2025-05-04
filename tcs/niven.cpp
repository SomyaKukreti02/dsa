#include <bits/stdc++.h>
using namespace std;

void niven(int n)
{
  int sum = 0;
  int digit;
  int temp = 1;
  int original = n;
  while (n != 0)
  {
    digit = n % 10;
    sum = sum + digit;
    n = n / 10;
  }
  if (original % sum == 0)
  {
    cout << "niven number";
  }
  else
  {
    cout << "not a niven number";
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

    niven(n);
  }
}
