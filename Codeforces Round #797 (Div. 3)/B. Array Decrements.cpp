#include <bits/stdc++.h>
using namespace std;
int main()
{
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
        int brr[n], diff[n], max_diff = 1e-8, min_ind = -1, min_diff = 1e8;
        for (int i = 0; i < n; i++)
        {
            cin >> brr[i];
            diff[i] = arr[i] - brr[i];
            if (max_diff < diff[i])
            {
                max_diff = diff[i];
            }
            if (min_diff > diff[i])
            {
                min_diff = diff[i];
                min_ind = i;
            }
        }

        
        int i;
        for (i = 0; i < n; i++)
        {
            if (arr[i] - max_diff != brr[i] && brr[i] != 0)
            {
                cout << "NO" << endl;
                break;
            }
        }
        if (i == n)
            cout << "YES" << endl;

        // cout << "H" << endl;
    }
}