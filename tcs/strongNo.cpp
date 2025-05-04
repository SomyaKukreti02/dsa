#include <bits/stdc++.h>
using namespace std;

int factorial(int n)
{
  int fact = 1;
  for (int i = 1; i <= n; i++)
  {
    fact = fact * i;
  }
  return fact;
}

void strong(int num)
{
  int sum = 0;
  int digit;
  int original = num;
  while (num > 0)
  {
    digit = num % 10;
    sum = sum + factorial(digit);
    num = num / 10;
  }
  if (sum == original)
  {
    cout << original << " " << "is a strong number";
  }
  else
  {
    cout << original << " " << "is not a strong number";
  }
}

int main()
{
  int tc;
  cin >> tc;
  while (tc--)
  {
    int num;
    cin >> num;

    
    strong(num);
  }
}