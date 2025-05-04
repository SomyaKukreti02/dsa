#include <bits/stdc++.h>
using namespace std;

void oddEven (int n) {
if (n % 2 == 0) {
  cout << n << " " <<"is an even number";
}
else {
  cout << n << " " << "is an odd number";
}

}


int main() {
  int tc;
  cin >> tc;
  while(tc--) {
    int n;
    cin >> n;
    oddEven(n);
  }
}