#include <bits/stdc++.h>
using namespace std;

int solve(int n) {
int ans = 1;
for(int i = 1 ; i <= n; i++ ) {
  ans = ans * i;

}
return ans;
}



int main() {
int tc;
cin >> tc;
while (tc--) {
  int n;
  cin >> n;
  int m;
  cin >> m;
int num = solve (n);
int den = solve (n - m);
cout<<num/den;
}
}