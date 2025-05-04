#include <bits/stdc++.h>
using namespace std;

int main () {
  int tc;
  cin >> tc;
  while (tc--) {
    int n;
    cin >> n;
    vector <int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    int s = 1;
    int p = 1;
    int ans = INT_MIN;
    for (int i = 0; i < n; i++) {
      if (p == 0) p = 1;
      if (s == 0) s = 1;
      p = p * a[i];
      s = s *a[n - i -1];
      ans = max(ans, max(p,s));
    }
  
    cout<<ans;
    }
}