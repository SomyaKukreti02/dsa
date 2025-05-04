/*
  INPUT:
  there will be t testcases
  frist line will contain number of testcases
  each testcase will contain {
    there will be four lines
    first line will contain two numbers n and m space separated
    second line will contain one sentence
    third line will contain n numbers space separated
    fourth line will contain m numbers space separated
  }
  example
  2
  3 4
  ramesh kumar
  1 2 3
  4 5 6 7
  2 3
  suresh kumar
  1 2
  4 5 6
*/
/*
  OUTPUT:
  for each testcase
  first line should output n and m space seperated
  second line the word
  third line n numbers space seperated
  fourth line m numbers space seperated
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
  int tc;
  cin >> tc;
  for (int i = 1; i <= tc; i++)
  {
    int n, m;
    string s;
    cin >> n >> m;
    cin.ignore();
    getline(cin, s);
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
      cin >> b[i];
    }

    cout << n << ' ' << m << endl;
    cout << s << endl;
    for (int i = 0; i < n; i++)
    {
      cout << a[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < m; i++)
    {
      cout << b[i] << " ";
    }
    cout << endl;
  }
}