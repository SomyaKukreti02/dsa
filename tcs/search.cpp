#include <bits/stdc++.h>
using namespace std;


int main() {
  int tc;
  cin >> tc;
  while (tc--) {

    int n;
    cin >> n;
    vector <int> a(n);
    for(int i = 0; i < n; i++) {
      cin >> a[i];
    }
    int key;
    cin >> key;
    bool found = false;
    for (int i = 0; i < n; i++) {
      if (key == a[i]) {
        cout << a[i] << " "<< "is present" << "at index" <<" "<< i;
        found = true;
        break;
      }
     
    }
    if(!found){
      cout << "key is not present";
    }
    
  }
}