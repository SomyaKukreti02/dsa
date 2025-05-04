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
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }
    int x;
    cin >> x;
    a.push_back(x);
    for (int i = 0; i < a.size(); i++)
    {
      cout << a[i] << ' ';
    }
    cout << endl;
  }
}
