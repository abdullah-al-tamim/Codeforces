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
        map<string, bool> map;
        string str[n];
        for (int i = 0; i < n; i++)
        {
            cin >> str[i];
            map[str[i]] = 1;
        }
        for (int i = 0; i < n; i++)
        {
            bool flag = 0;
            for (int j = 1; j < str[i].size(); j++)
            {
                string pre = str[i].substr(0, j);
                string suf = str[i].substr(j, str[i].size());
                if ((map[pre] and map[suf]))
                {
                    flag = 1;
                }
                // else
                // {
                //     map[str[i]] = 0;
                // }
            }
            cout << flag ;
        }
        // for (int i = 0; i < n; i++)
        // {
        //     cout << map[str[i]];
        // }
        cout << endl;
        
    }
}