#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        string a, b;
        cin >> a >> b;
        string c = "";
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        // cout << a << endl;
        // cout << b << endl;

        int i = 0, j = 0;
        int c1 = 0, c2 = 0;
        while (a.size() != 0 && b.size() != 0)
        {
            // c += min(a[i], b[i]);

            if ((a[0] < b[0] && c1 != k)||(c2 == k))
            {
                c += a[0];
                a.erase(a.begin());
                c1++;
                c2 = 0;
            }
            else
            {
                if (c2 != k )
                {
                    c += b[0];
                    b.erase(b.begin());
                    c2++;
                    c1 = 0;
                }
            }
            // i++;
        }
        cout << c << endl;
    }
}