#include <bits/stdc++.h>
using namespace std;

void leftRotate(vector<int> a, int k, int n)
{
  reverse(a.begin(), a.begin() + k);

  reverse(a.begin() + k, a.end());

  reverse(a.begin(), a.end());
  for (int i = 0; i < a.size(); i++)
  {
    cout << a[i] << " ";
  }
  cout << endl;
}

void rightRotate(vector<int> a, int k, int n)
{
  reverse(a.begin(), a.begin() + n - k);

  reverse(a.begin() + n - k, a.end());

  reverse(a.begin(), a.end());
  for (int i = 0; i < a.size(); i++)
  {
    cout << a[i] << " ";
  }
  cout << endl;
}

int main()
{
  int tc;
  cin >> tc;
  while (tc--)
  {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }
    k = k % n;
    leftRotate(a, k, n);
    rightRotate(a, k, n);
    cout << "\n-----------------------\n";
  }
}