#include <bits/stdc++.h>
using namespace std;

int main() {
  int tc;
  cin >> tc;
  while (tc--) {
    int n;
    cin >> n;
    vector<int> a(n);
    map<int, int> freq;
    for(int i = 0; i < n; i++) {
      cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
      int key = a[i];
      freq[key]++;
    }
    int f = 0, mode = 0;
    for(auto it: freq){
      if(it.second >= f){
        f = it.second;
        mode = it.first;
      }
      cout << it.first << " => " << it.second<<endl;
    }
    cout << "MODE: " << mode <<endl;
    cout << endl;
  }
}