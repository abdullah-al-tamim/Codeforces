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
        string s[n];
        map<string, int> map;
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
            // sort(s[i].begin(), s[i].end());
            map[s[i]] = 0;
        }
        // sort(s, s + n);
        bool arr[n];
        memset(arr, 0, sizeof(arr));
        string str = "";
        for (int i = 0; i < n; i++)
        {
            for (unsigned int j = 0; j < s[i].length(); j++)
            {
                str += s[i][j];
                if (map[str] == 0)
                {
                    map[str] = 1;
                }
            }
        }
        for (auto i : map)
        {
            cout << i.second;
        }

        // for
        // for (int i = 0; i < n; i++)
        // {
        //     cout << s[i] << endl;
        // }
    }
}