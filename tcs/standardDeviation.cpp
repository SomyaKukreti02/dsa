#include <bits/stdc++.h>
using namespace std;

int main() {
  int tc;
  cin >> tc;
  while(tc--) {
    double mean;
    double sum;
    int n;
    cin >> n;
    vector <double> x(n);
    for(int i = 0; i < n; i++) {
      cin >> x[i];
      sum = sum + x[i];


    }
    mean = sum / n;
    double sd = 0;
    for (int i = 0; i < n; i++) {
      sd = pow(x[i] - mean, 2) ;

    }
    cout << sqrt(sd/n);
  }

 
}