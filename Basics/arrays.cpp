#include <bits/stdc++.h>
using namespace std;
int findSecondLargest(int n, vector<int> arr)
{
    int l = -1;
    int sl = -1;
    for (int i = 0; i < n; i++)
    {
        int num = arr[i];
        if (num > l)
        {
            sl = l;
            l = num;
        }
        else if (num > sl && num != l)
        {
            sl = num;
        }
    }
    return sl;
}
int main()
{
    int tc;
    cin >> tc;
    for (int i = 1; i <= tc; i++)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cout << findSecondLargest(n,arr) <<endl;
    }

    return 0;
}
