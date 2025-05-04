#include <bits/stdc++.h>
using namespace std;

void fractions(int n1, int d1, int n2, int d2) 
{

  int ans = n1 * d2 + d1 * n2;
  int res = d1 * d2;
  cout  << ans<<"/"<< res;

}

int main() {
  int tc;
  cin >> tc;
  while (tc--) {
    int n1, n2, d1, d2;
    cin >> n1>> d1 >> n2>> d2;
    fractions(n1, d1, n2, d2);
  }
}