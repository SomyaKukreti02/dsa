#include <bits/stdc++.h>
using namespace std;


int replace(int n) {
  string s  = to_string(n);
  for(int i = 0; i < s.length(); i++) {
    if( s[i] == '0') {
      s[i] ='1';
    }
  }
  return stoi(s);
}


int main() {
  int tc;
  cin >> tc;
  while (tc--) {
    int n;
    cin >> n;
    int result =   replace (n);
    cout<<result;
  
  }
}