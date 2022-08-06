#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll arr[100005];
ll lf[100005], ri[100005];
int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    // for (int i = 0; i < n - 1; i++)
    // {
    //     lf[i] = max(0, arr[i] - arr[i + 1]);
    // }
    for (int i = 2; i <= n; i++)
    {
        if (arr[i] < arr[i - 1])
            ri[i] = ri[i-1] + (arr[i-1]-arr[i]);
        else
            ri[i] = ri[i - 1];
    }
    for (int i = n-1; i > 0; i--)
    {
        if(arr[i] < arr[i + 1])
            lf[i] = lf[i + 1] + (arr[i+1] - arr[i]);
        else
            lf[i] = lf[i+1];
    }
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        if (x < y)
        {
            cout << (ri[y] - ri[x] )<< endl;
        }
        else
            cout <<( lf[y] - lf[x]) << endl;
    }
}