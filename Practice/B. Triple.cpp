#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        map<int, int> map;
        int x;
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            map[x]++;
            if (map[x] >= 3 && flag )
            {
                flag = false;
                cout << x << endl;
                // break;
            }
        }
        if (flag)
        {
            cout << -1 << endl;
        }
    }
}