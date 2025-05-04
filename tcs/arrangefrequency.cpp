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
    map<int, int> freq;
    for (int i = 0; i < n; i++)
    {
      int key = a[i];
      freq[key]++;
    }
    vector<pair<int,int>> v;
    for(auto it: freq){
      int key = it.first;
      int val = it.second;
      v.emplace_back(val,key);
    }
    sort(v.rbegin(), v.rend());
    for(auto it: v){
      int f = it.first;
      int value = it.second;
      for(int i = 1; i <= f; i++) {
        cout << value<< " ";
      }
    }
    cout << endl;
  }
}