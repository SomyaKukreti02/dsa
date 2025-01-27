#include <bits/stdc++.h>
using namespace std;

template <typename T>
void print_vector(const vector<T> &a)
{
  for (const auto &x : a)
  {
    cout << x << " ";
  }
  cout << endl;
}

template <typename T, typename... Args>
void print(const vector<T> &a, const Args &...args)
{
  print_vector(a);
  (print_vector(args), ...);
}

void explainVector()
{
  vector<int> a;                           // declaration vector<data_type> name;
  vector<int> b(5);                        // vector of size 5 a = {0, 0, 0, 0, 0}
  vector<int> c(5, 1);                     // vector of size 5 a = {1, 1, 1, 1, 1}
  vector<int> d = {1, 2, 3, 4, 5};         // vector of size 5 a = {1, 2, 3, 4, 5}
  vector<int> e(d.begin() + 2, d.end()); // copy elements from first parameter to second parameter 
  vector<int> f(e);                        // copy elements of e in f
  print(a,b,c,d,e,f);

  cout << "--------------------------\n";
  // function to push elements in vector
  a.push_back(2); // a = {2}
  a.push_back(5); // a = {2, 5}
  a.emplace_back(1); // a = {2, 5, 1}
  print(a);
  // q: difference between push_back and emplace_back
  // a: push_back copies the element and emplace_back constructs the element in place
  //    emplace_back is faster than push_back
  // example: vector of pairs
  // vector<pair<int, int>> v;
  // v.push_back({1, 2}); // copy
  // v.emplace_back(1, 2); // construct in place

  cout << "--------------------------\n";

  // function to pop elements from vector
  a.pop_back(); // a = {2, 5}
  print(a);

  cout << "--------------------------\n";

  // function to insert elements in vector
  a.insert(a.begin(), 5); // a = {5, 2, 5}
  print(a);
  a.insert(a.begin() + 1, 2, 3); // it will insert 3, 3 at index 1 two times
  print(a);
  a.insert(a.begin(), d.begin(), d.end()); // insert elements from d to a
  print(a);














}

int main()
{
  explainVector();

  return 0;
}