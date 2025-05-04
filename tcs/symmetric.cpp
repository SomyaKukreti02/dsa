#include <bits/stdc++.h>
using namespace std;
void findSymmetricPairs(int n, vector<pair<int, int>> &a)
{
    // TC : O(n*n) SC: O(n*n) assuming n is the max value of a[i] i.e. 0 <= a[i] < 10^3
    int MAX_VALUE = 1e3;
    vector<vector<int>> matrix(MAX_VALUE, vector<int>(MAX_VALUE, 0));
    for (int i = 0; i < n; i++)
    {
        int x = a[i].first;
        int y = a[i].second;
        matrix[x][y] = 1;
    }
    bool found = false;
    for (int i = 0; i < MAX_VALUE; i++)
    {
        for (int j = i; j < MAX_VALUE; j++)
        {
            if (i != j && matrix[i][j] == 1 && matrix[j][i] == 1)
            {   
                found = true;
                cout << i << " " << j << endl;
            }
        }
    }
    if( !found) 
    cout << "No symmetric pair found." << endl;
}

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vector<pair<int, int>> a;
        for (int i = 0; i < n; i++)
        {
            int first, second;
            cin >> first >> second;
            a.push_back({first, second});
        }
        findSymmetricPairs(n, a);
    }
    return 0;
}