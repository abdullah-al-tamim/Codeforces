#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        map<int, int> map;
        for (int i = 0; i < n; i++)
        {
            map[arr[i]]++;
        }
        if (arr[0] == arr[n - 1])
        {
            cout << (n * 2)-2 << endl;
        }
        else
        {
            cout << max(map[arr[0]], map[arr[n - 1]]) * 2 << endl;
        }
    }
}