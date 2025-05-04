#include <bits/stdc++.h>
using namespace std;

int main () {
  int tc;
  cin >> tc;
  while (tc--) {
    int n;
     cin>>n;
     int fact =1;
     for (int i = 1; i <= n; i++) {
      fact = fact * i;

     }
     cout << fact;
  }
}