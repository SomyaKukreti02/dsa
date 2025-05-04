#include <bits/stdc++.h>
using namespace std;


void lcm(int n, int m) {
  int limit= min(n,m);
  int prod =1;
  for(int i = 1; i <= limit; i++) {
    if (n % i == 0 || m % i == 0) {
      cout << i << endl;
      prod = prod * i;
     
    }
    
  } 
  cout << "lcm "<< prod;
}


int main() {
  int tc;
  cin >> tc;
  while (tc--) {
    int n,m;
    cin >>n >> m;
    lcm(n,m);
  }
}