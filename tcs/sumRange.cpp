  #include <bits/stdc++.h>
  using namespace std;

  int main() {
    int tc;
    cin >> tc;
    while (tc--) {
      int n, m;
      
      cin >> n>> m;
      int sum = 0;
      for (int i = n; i<= m; i++) {
        sum = sum + i;
        cout << i<< endl;
        
      }
      cout << "the sum of given range is"<<" " << sum;
    }

  }