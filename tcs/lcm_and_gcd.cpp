#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
  while (b != 0) {
    int temp = b;
    b = a % b;
    a = temp;
  }
  return a;
}

void lcm(int n, int m) {
  int g = gcd(n, m);
  int l = (n * m) / g;
  cout << "LCM: " << l << endl;
}

int main() {
  int tc;
  cin >> tc;
  while (tc--) {
    int n, m;
    cin >> n >> m;
    lcm(n, m);
  }
}
