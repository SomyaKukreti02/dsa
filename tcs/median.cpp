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
    sort(a.begin(), a.end());
    int i = (n-1)/2, j = n/2;
    double res = (a[i] + a[j])/2.0;
    cout << res << endl;
  }
}