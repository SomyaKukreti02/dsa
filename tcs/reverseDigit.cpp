#include <bits/stdc++.h>
using namespace std;


void reverse(int n)  {
int result = 0;
int ld ;
while (n != 0) {
  ld = n % 10;
  result = result * 10 + ld;
  n = n/10;
}
cout << result;

}





int main () {

int tc;
cin >> tc;
while (tc--) {
  int n;
  cin >> n;
  reverse(n);
}

}