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
    int temp = n;
    int rev=0;
    while (n > 0)
    {
      int ld = n % 10;
      rev = (rev * 10) + ld;
      n = n / 10;
    }
    if (temp == rev)
    {
      cout<< "Yes"<<endl;
    }
    else
     cout<<"NO"<<endl;
  }
}