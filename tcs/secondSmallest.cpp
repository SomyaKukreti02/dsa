#include <bits/stdc++.h>
using namespace std;

int main() {
  int tc;
  cin >> tc;
  while (tc--) {
    int n ;
    cin >> n;
    vector <int> a (n);
    for (int i = 0 ; i < n; i++) {
      cin >> a[i];
    }
    sort(a.begin(), a.end());
    // 1 2 2 4 5 8 9
    // -17 -17 -1 -1 0 2 4 9
    int ans = 1e9;
    for(int i = 0; i < n - 1; i++) {
      if (a[i] != a[i+1]) {
        ans = a[i+1];
        break;
      }
    }
    cout << ans<< endl;
    
  }
}