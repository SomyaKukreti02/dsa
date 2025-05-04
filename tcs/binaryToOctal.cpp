#include <bits/stdc++.h>
using namespace std;

int binaryTodecimal(int n)
{
  int power = 0;
  int decimal = 0;
  while (n > 0)
  {
    int ld = n % 10;
    decimal += ld * pow(2, power);
    power++;
    n = n / 10;
  }
  return decimal;
}

int main()
{
  int tc;
  cin >> tc;
  while (tc--)
  {
  }
}