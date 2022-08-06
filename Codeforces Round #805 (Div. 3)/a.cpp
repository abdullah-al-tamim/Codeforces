#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        int l = to_string(n).length();
       
        ll up = pow(10, l ), down = pow(10, l-1);
        if (up %10 == 9) up++;
        if (down %10 == 9) down++;
        ll res = min(up, down);
        cout << up << " " << down << endl;
        cout << abs(n - res) << endl;
    }
}