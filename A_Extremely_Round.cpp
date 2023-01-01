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
        string str = to_string(n);
        string div = "1";
        for (int i = 0; i < str.length() - 1; i++)
        {
            div += "0";
        }
        ll number = stoi(div);
        if (n <= 10)
        {
            cout << n << endl;
        }
        else
        {
            // cout << number << endl;
            ll cnt = n / number;
            ll res;
            if (cnt == 1)
            {
                res = 9 + (cnt * ((div.length() - 2) * 10));
            }
            else
            {

                res = cnt + 9 + (((div.length() - 2) * 10));
            }
            cout << res << endl;
        }
    }
}