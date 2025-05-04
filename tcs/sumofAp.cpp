#include <bits/stdc++.h>
using namespace std;


//  a = first number
//  n = count of number
//  d = difference
// i = index number

void ap(double a , double n, double d) {
  double sum = 0;
  for (int i = 0; i < n ; i++) {
    sum += a + i * d;
  }
  cout << "sum of Ap is" << " " << sum;
  
}

int main () {
int tc;
cin >> tc;
while(tc--) {
  double a,n,d;
  cin >> a >> n >> d;

  ap(a, n, d);
}

}