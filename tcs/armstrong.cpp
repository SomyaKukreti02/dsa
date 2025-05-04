#include <bits/stdc++.h>
using namespace std;

int main() {
  int tc;
  cin >> tc;
  while (tc--) {
    int sum = 0;

    int n;
    cin >> n;
    int temp =n;
    int size = to_string(n).length();
    while (n >0) {

   
    int ld = n % 10;
    sum += pow(ld, size) ;
    n  = n/10;
   
  }
  if (sum == temp) {
    cout << "yes it is an armstrong";
  }
  else {
    cout << "no";
  }
 }
}