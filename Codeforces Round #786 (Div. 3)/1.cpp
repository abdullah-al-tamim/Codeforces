#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        if (y < x)
        {
            cout << "0 0" << endl;
        }
        else if (x == y)
        {
            cout << "1 1" << endl;
        }
        else
        {
            int b;
            // for (int i = x; i < y; i++)
            // {
            //     if (i == 1)
            //     {
            //         i = y;
            //     }

            //     if (y % i == 0)
            //     {
            //         b = i;
            //         // break;
            //     }
            // }
            if (y % x == 0)
            {
                b = y / x;
                cout << 1 << " " << b << endl;
            }
            else
            {
                cout << "0 0" << endl;
            }
            // b = x / b;
        }
    }
}