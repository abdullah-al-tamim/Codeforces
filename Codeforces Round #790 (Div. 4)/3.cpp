#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, len;
        cin >> n >> len;
        string arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int min = 10e8;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n && j != i; j++)
            {
            int cost = 0;
                for (int k = 0; k < len; k++)
                {
                    if (arr[i][k] != arr[j][k])
                    {
                        cost += (abs(arr[i][k] - arr[j][k]));
                    }
                }
                if (cost < min )
                {
                    min = cost;
                }
            }
        }
        cout << min << endl;
    }
}