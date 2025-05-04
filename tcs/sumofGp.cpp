#include <bits/stdc++.h>
using namespace std;

// a, first term
// r, common ratio
// n, number of terms

void sumOfGp(double a, double r, double n)
{
  double sum = 0;

  if (r == 1)
  {
    sum = a * n;
  }
  else
  {
    sum = a * (pow(r, n) - 1) / (r - 1);
  }

  cout << "sum of Gp is" << " " << sum;
}

int main()
{
  int tc;
  cin >> tc;
  while (tc--)
  {
    double a, r, n;
    cin >> a >> r >> n;

    sumOfGp(a, r, n);
  }
}
