#include <bits/stdc++.h>
using namespace std;

int main() {
  int tc;
  cin >> tc;
  while (tc--) {
    int n;
    cin >> n;
    vector <int> a(n);
    for (int i =0; i < n; i++) {
      cin >> a[i];
    }
    int totalSum = 0;
    for (int i = 0; i <n; i++){
      totalSum += a[i]; 
    }
    int eqIndex = -1;
    int leftSum = 0;
    for (int i = 0; i < n; i++) {
      int rightSum = totalSum - leftSum - a[i];
      if(leftSum == rightSum){
        eqIndex = i;
        break;
      }
      leftSum += a[i];

    }
    cout << eqIndex<< endl;
  }
}