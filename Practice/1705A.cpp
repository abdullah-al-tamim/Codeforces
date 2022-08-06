#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
         n *= 2;
        int arr[n+5];
        memset(arr, 0, sizeof(arr));
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        int i = 0, j = n / 2;
        for (; i < n / 2 and j < n; i++, j++)
        {
            if (arr[j] - arr[i] < x)
            {
                // cout << arr[i] - arr[j] << endl;
                cout << "NO" << endl;
                break;
            }
        }
        if (j == n)
        {
            cout << "YES" << endl;
        }
    }
}
