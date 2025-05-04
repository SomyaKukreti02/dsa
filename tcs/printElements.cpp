#include <bits/stdc++.h>
using namespace std;

int main()
{
  int tc;
  cin >> tc;
  while (tc--)
  {
    int rows = 2;
    int col = 3;

    int matrix[2][3];
    cout << "enter elements of matrix" << endl;
    for (int i = 0; i < rows; i++)
    {
      for (int j = 0; j < col; j++)
      {
        cin >> matrix[i][j];
      }
    }
    cout << "the matrix is" << endl;
    for (int i = 0; i < rows; i++)
    {
      for (int j = 0; j < col; j++)
      {
        cout << matrix[i][j] << " ";
      }
      cout << endl;
    }
    return 0;
  }
}