#include<bits/stdc++.h>
using namespace std;


bool prime(int n) {
if (n <=1) {
  return false;
}
for(int i = 2; i < n; i++){
  if(n%i== 0) {
    return false;
  }

}
return true;
}


int main() {
  int tc;
  cin >> tc;
  while (tc--) {
 int n;
 cin >> n;
 bool flag = false;
 for(int i = 2; i <n/2; i++) {
  if(prime(i) && prime(n-i)) {
    cout << "yes";
    flag = true;
    break;
  }
 }
 if(flag == false ) {
  cout << "no";
 }
  }
}