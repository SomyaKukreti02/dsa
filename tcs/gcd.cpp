#include <bits/stdc++.h>
using namespace std;

int main()
{
  int tc;
  cin >> tc;
  while (tc--)
  {
    int n, m;
    cin >> n >> m;
    int multiply1 = 1;
    int multiply2 = 1;
    for (int i = 1; i <= n; i++)
    {
      if (n % i == 0)
      {
       
        cout << " " << i;
       
      }
    }
    cout << endl;
    for (int i = 1; i <= m; i++)
    {
      if (m % i == 0)
      {
       
        cout << " " << i;
      }
    }
    cout << endl;

    cout << "common factors"<<endl;
    int limit = min(n, m);
    for(int i =1; i <= limit; i++ ) {
      if (n % i == 0 && m % i == 0) {
        cout << i << " ";
        
      }
    }
    cout << endl;
  }
}