#include<bits/stdc++.h>
using namespace std;

int main(){
  int tc;
  cin >> tc;
  while(tc--){
    int m , n;
    cin >> m >> n;
    vector<bool> isPrime(100000, true);
    isPrime[0] = isPrime[1] = false;
    for(int num = 2; num<100000; num++){
      for(int div = 2; div <= sqrt(num); div++){
        if(num % div == 0){
          isPrime[num] = false;
          break;
        }
      }
    }
    int mth = -1 , nth = -1 ;
    for(int i = 0, found = 0; i<100000; i++){
      if(isPrime[i]){
        found++;
      }
      if(found == m && mth == -1){
        mth = i;
      }
      if(found == n && nth == -1){
        nth = i;
      }
    }
    cout << mth << " " << nth<<endl;
    while(mth >= 10){
      int digitSum = 0;
      int temp = mth;
      while(temp){
        digitSum += temp % 10;
        temp/=10;
      }
      mth = digitSum;
    }
    while(nth >= 10){
      int digitSum = 0;
      int temp = nth;
      while(temp){
        digitSum += temp % 10;
        temp/=10;
      }
      nth = digitSum;
    }
    cout << mth << " " << nth<<endl;
    cout << mth * nth << endl;
  }
}