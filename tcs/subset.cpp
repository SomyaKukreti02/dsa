#include <bits/stdc++.h>
using namespace std;

void subset(int n,int m ,vector<int> a,vector<int> b) {
  if (n < m) {
    cout << "false";
  }
  else {
    cout << "true";
  }
}



int main () { 
  int tc;
  cin >> tc;
  while (tc--) {
  int n, m;
  cin >> n >> m;
  vector <int> a(n), b(m);

  for(int i = 0; i< n; i++ ) 
    cin >> a[i];
    for(int i = 0; i <m; i++) 
    cin >> b[i];
    
  
  subset(n,m,a ,b); 
  }
}