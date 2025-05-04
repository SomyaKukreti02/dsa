#include <bits/stdc++.h>
using namespace std;


void areaOfCircle(int n) {
  double ans = 3.14 * n* n;
  cout <<" area of circle"<<":" <<ans;
}
int main() {
  int tc;
  cin >> tc;
  while (tc--) {
    int n;
    cin >> n;
    areaOfCircle(n);
  }
}