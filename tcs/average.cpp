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
    int sum = 0;
    double avg = 0;
    for (int i = 0; i < n; i++)
    {
      sum = sum + a[i];
    }
    avg = sum / n;
    cout << avg;
    cout << endl;
  }
}