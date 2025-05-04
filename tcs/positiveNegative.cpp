#include <bits/stdc++.h>
using namespace std;
 

void positiveNegative (int n) {
  if (n > 0) {
    cout << n << " " << "is a positive number";
  }
  else if(n < 0){
    cout << n << " " << "is a negative number";
  }
  else  {
    cout << n << " " << "is Zero";
  }
}


int main () {
  int tc;
  cin >> tc;
  while(tc--) {
    int n;
    cin >> n;
    positiveNegative(n);
  }
}