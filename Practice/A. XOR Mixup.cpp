#include <bits/stdc++.h>
using namespace std;
int main()
{
    // int res = 3 ^ 5;
    // cout << res << endl;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int res ;
        for (int i = 0; i < n; i++)
        {
            res = 0;
            for (int j = 0; j < n && j != i; j++)
            {
                res = res ^ arr[j];
            }
            if (res == arr[i])
            {
                cout << arr[i] << "\n";
                break;
            }
        }
    }
}