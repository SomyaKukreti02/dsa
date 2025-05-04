#include <bits/stdc++.h>
using namespace std;


int main() {
  int tc;
  cin >> tc;
  while (tc--) {
    int n;
    cin >>n;
    int power = 0;
    int decimal = 0;
    while(n >0) {
      int ld = n % 10;
    decimal += ld *pow(2,power);
    power ++; 
    n = n/10;
    }
    cout << decimal<< endl  ;
   
  }
  return 0;
}
