#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int arr[2][n + 5];
        int i;
        int flag = 1;
        for (i = 1; i <= n; i += 2)
        {
            if (((i + k) * (i + 1)) % 4 == 0)
            {
                arr[0][i] = i;
                arr[1][i] = i + 1;
                // cout << i << " " << i + 1 << endl;
            }
            else if (((i + 1 + k) * i) % 4 == 0)
            {
                arr[1][i] = i;
                arr[0][i] = i + 1;
            }
            else
            {
                cout << "NO" << endl;
                flag = 0;
                 break;
            }
        }
        if (flag)
        {
            cout << "YES" << endl;
            for (int i = 1; i <= n; i += 2)
            {
                cout << arr[0][i] << " " << arr[1][i] << endl;
            }
        }
    }
}