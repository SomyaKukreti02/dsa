#include <bits/stdc++.h>
using namespace std;


int main() {
  int tc;
  cin >> tc;
  while (tc--) {
    int n;
    cin >> n;
    set<int> a;
    for (int i = 0; i < n; i++) {
     int x;
     cin >> x;
     a.insert(x);
   }
    for (int val : a) {
      cout << val << ' ';
    }
      cout << endl ;
  }
}