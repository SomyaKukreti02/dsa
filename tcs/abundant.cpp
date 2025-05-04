#include <bits/stdc++.h>
using namespace std;

void abundant(int n)
{
  int factor;
  int sum = 0;
  for (int i = 1; i < n; i++)
  {
    if (n % i == 0)
    {
      cout << i << endl;
      sum = sum + i;
    }
  }
  cout << sum <<endl;
  if (sum > n) {
    cout << " it is an abundant number";
  }
  else {
    cout << "not an abundant number";
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
    abundant(n);
  }
}