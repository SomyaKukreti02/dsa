#include <bits/stdc++.h>
using namespace std;

int main() {
  int tc;
  cin >> tc;
  while (tc--)  {
    int n ; 
    cin >> n;
    vector <int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    int key ;
    cin >> key;
    int l = 0;
    int r= n-1;
    int ans = -1;
    while (l <= r)
    {
      int mid = (l+r)/2;
      if (a[mid] > key) {
        r = mid -1;

      }
      else if (a[mid] < key) {
        l = mid +1;
      }
      else {
         ans = mid;
         break;
      }
    }
    cout<<ans<<endl;
  
  }
}