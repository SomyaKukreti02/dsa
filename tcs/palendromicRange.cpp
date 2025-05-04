#include <bits/stdc++.h>
using namespace std;

bool isPlaindrome(int n) {
   int rev = 0;
   int temp = n;
   while (n > 0) {
    int ld = n%10;
    rev = (rev*10) + ld;
    n = n/10;
  }
 if(temp==rev){
  return true;
 }
 return false;
}





int main() {
  int tc;                                     
  cin >> tc;
  while (tc--) {
  int min, max;
  cin >> min>>max;
  for (int i = min; i <= max; i++) {
    if(isPlaindrome(i)) {
    cout << i << endl;
    }
  }
  }
}