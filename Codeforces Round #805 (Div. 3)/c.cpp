#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define max 1e9
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll arr[n];
        map<ll, ll> s;
        map<ll, ll> e;
        for (ll i = 1; i <= n; i++)
        {
            cin >> arr[i];
            if (s[arr[i]] == 0)
            {
                s[arr[i]] = i;
            }
            e[arr[i]] = i;
        }
        ll brr[k][2];

        for (ll i = 1; i <= k; i++)
        {
            cin >> brr[i][0] >> brr[i][1];
            // cout << s[brr[i][0]] << " " << e[brr[i][1]] << endl;
            if ((s[brr[i][0]] < e[brr[i][1]]) and (s[brr[i][0]] != 0 and e[brr[i][1]] != 1))
            {
                cout << "YES" << endl;
            }
            else
                cout << "NO" << endl;
        }
    }
}