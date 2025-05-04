#include <bits/stdc++.h>
using namespace std;

int main() {
  int tc;
  cin >> tc;
  while (tc--) {
    int n;
    cin >> n;
    int count = 0;
    for(int i = 1; i <=n; i++) {
  
      if(n%i == 0) {
        count += 1;
      } 

    }

      if (count == 2) {
        cout << "YES"<<endl;
      }
      else 
      cout << "NO"<<endl;
    }
  }
