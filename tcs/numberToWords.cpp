#include <bits/stdc++.h>
using namespace std;
vector<string> oneToNineteen = {
    "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten",
    "eleven", "tweleve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen",
    "nineteen"};
vector<string> tens = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
map<long long, string> mp = {
    {100, "hundered"},
    {1000, "thousand"},
    {100000, "lakh"},
    {10000000, "crore"},
    {1000000000, "arab"},
    {100000000000, "kharab"}
  };

string numberToWords(long long n)
{ 
  if(n == 0) {
    return oneToNineteen[0];
  }
  string result = "";
  int order = 1;
  for(int i = 0; n > 0;i++){
    if(i == 0){
      int lastTwoDigits = n % 100;
      n /= 100;
      if(lastTwoDigits > 0 && lastTwoDigits <= 19){
        result += oneToNineteen[lastTwoDigits];
      }
      if(lastTwoDigits > 19){
        int onesDigit = lastTwoDigits % 10;
        int tensDigit = lastTwoDigits/10;
        result += tens[tensDigit];
        if(onesDigit > 0){
          result += " " + oneToNineteen[onesDigit];
        }
      }
      order *= 100;
    }else if (i == 1){
      int digit = n % 10;
      n/=10;
      if(digit > 0){
        result = oneToNineteen[digit] + " hundered " + result;
      }
      order *= 10;
    }else{
      int twoDigits = n % 100;
      n/=100;
      string current = "";
      if(twoDigits > 0 && twoDigits <= 19){
        current += oneToNineteen[twoDigits];
      }
      if(twoDigits > 19){
        int onesDigit = twoDigits % 10;
        int tensDigit = twoDigits/10;
        current += tens[tensDigit];
        if(onesDigit > 0){
          current += " " + oneToNineteen[onesDigit];
        }
      }
      if(current != ""){
        current = current + " " + mp[order];
        result = current + " " + result;
      }
      order *= 100;
    }
  }
  return result;
}

int main()
{
  int tc;
  cin >> tc;
  while (tc--)
  {
    long long n;
    cin >> n;
    cout << numberToWords(n) << endl;
  }
  return 0;
}
