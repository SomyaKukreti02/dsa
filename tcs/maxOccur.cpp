#include <bits/stdc++.h>
using namespace std;

int main()
{
  int tc;
  cin >> tc;
  while (tc--)
  {
    char ans;
    string s;
    cin >> s;
    map<char, int> count;
    for (int i = 0; i < s.length(); i++)
    {
      count[s[i]]++;
    }
     char max_count = 0;
     char max_char;
     for (auto entry : count) {
      if (entry.second > max_count) {
        max_count = entry.second;
        max_char = entry.first;
      }
     }
     cout << max_char << " " << endl;
  }
}