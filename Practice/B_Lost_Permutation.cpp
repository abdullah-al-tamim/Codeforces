#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, s;
        cin >> n >> s;
        ll arr[n + 5];
        ll sum = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        ll i;
        for (i = 1; i < 500; i++)
        {
            ll val = (i * (i + 1)) / 2;
            if (val == s + sum)
            {
                break;
            }
        }

        if (i > 1 and i != 500)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}