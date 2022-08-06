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
        int arr[n], brr[n], diff[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> brr[i];
        }

        for (int i = 0; i < n; i++)
        {
            if(i == 0)
                diff[i] = brr[i] - arr[i];
            if (i > 0)
            {
                diff[i] = brr[i] - max(arr[i], brr[i - 1]);
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << diff[i] << " ";
        }
        cout << endl;
    }
}