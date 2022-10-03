#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long mn, mx;
        if (n<4 || n%2 == 1)
        {
            cout << -1 << endl;
            continue;
        }
        else
        {
            mn = (n+4)/6;
            mx = n/4;
        }
        cout << mn <<" "<< mx << endl;
    }
}
