#include <bits/stdc++.h>
using namespace std;

 int main()
 {
  int tc;
  cin >> tc;
  while (tc--) {
    int n ;
     cin >> n;
     vector<int> a(n);
     map<int , int> mp;
     for(int i = 0; i< n; i++) {
      cin >> a[i];
      mp[a[i]]++;
     }

     for(auto rep: mp) {
      if(rep.second > 1) {
        cout << rep.first<< ' ';
      }
     }
     cout<< endl;
  }
 }