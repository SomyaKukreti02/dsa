#include <bits/stdc++.h>
using namespace std;

int main()
{
  int tc;
  cin >> tc;
  while (tc--)
  {
    int year;
    cin >> year;
    if (year % 4 == 0 || year % 400 == 0){
      cout << year << " " << "is leap year";
    }
    else {
      cout << year << " " << "is not leap year";
    }
  }
}