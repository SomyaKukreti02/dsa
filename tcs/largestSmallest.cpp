#include <bits/stdc++.h>
using namespace std;

void largestSmallest(int n)
{
  int d, mini = INT_MAX, maxi = INT_MIN;
  while (n != 0) {
    d = n % 10;
    mini = min (mini,d);
    maxi = max(maxi,d);
    n = n/10; 
  }  
   cout<< "the minimum no is"<<" "<< mini<< endl;
   cout << "the max no is"<<" " << maxi << endl;

}

int main()
{
  int tc;
  cin >> tc;
  while (tc--)
  {
    int n;
    cin >> n;
  
    largestSmallest(n);
 

  }
}