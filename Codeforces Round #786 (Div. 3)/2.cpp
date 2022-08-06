#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        char *a = "abcdefghijklmnopqrstuvwxyz";
        map<string, int> map;
        int k = 1;
        char p, q;
        cin >> p >> q;
        for (int i = 0; i < 26; i++)
        {
            char *b = "abcdefghijklmnopqrstuvwxyz";
            for (int j = 0; j < 26; j++)
            {
                if (a[i] != b[j] )
                {
                    if (a[i] == p && b[j] == q)
                        cout << k << endl;
                    k++;
                    // map[a[i] + "" + b[j]] = k++;
                }
            }
        }
    }

    // cin >> t;
    // while (t--)
    // {
    //     char s[2];
    //     cin >> s;
    //     cout << map[s[0] + "" + s[1]] << endl;
    // }
}