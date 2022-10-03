#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n+5];
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }
        int c = 0;
        for (int i = 1; i <= k; i++)
        {
            if (arr[i] > k)
            {
                c++;
            }
        }
        cout << c << "\n";
    }
}