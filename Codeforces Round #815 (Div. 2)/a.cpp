#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b, c, d;
        cin >> a >> b >> c >> d;
        double v1 = a / double(b);
        double v2 = c / double(d);
        // cout << "V: " << v1 << " " << v2 << endl;
        // cout << "ad: " << a*d << "bc: " << b*c << endl;
        if (v1 == v2)
        {
            cout << 0 << endl;
        }
        else if ((a == 0) || (c == 0) || ((b * c) % (a * d) == 0) || ((a * d) % (b * c) == 0))
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 2 << endl;
        }
    }
}