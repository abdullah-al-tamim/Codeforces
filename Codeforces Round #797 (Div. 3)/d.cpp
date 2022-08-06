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
        int k;
        cin >> k;
        string s;
        cin >> s;
        int count = 0;
        int max = 1e-5;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 'B')
                count++;
            if (count > max)
            {
                max = count;
            }
            if (s[i] == 'W')
            {
                count = 0;
            }
        }
        if (k - max > 0)
        {
            cout << k - max << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
}