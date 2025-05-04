#include <bits/stdc++.h>
using namespace std;

int main () {
  int tc;
  cin >> tc;
  while (tc--) {
    string s1 , s2;
    cin >> s1 >> s2;
    if (s1.length()!= s2.length()) {
     cout << "No";
    
    }
    sort(s1.begin(),s1.end()) ;
    sort(s2.begin(),s2.end());

    if (s1 == s2) {
      cout << "it is an anagram";
    }
    else {
      cout << "Not an anagram";
    }
   
  }
}