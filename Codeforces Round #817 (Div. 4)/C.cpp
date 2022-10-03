#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int arr[3];
        memset(arr, 0, sizeof(arr));
        int n;
        cin >> n;
        map<string, int> p;
        map<string, int> pp;
        map<string, int> ppp;
        string s[n], ss[n], sss[n];
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
            p[s[i]]++;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> ss[i];
            p[ss[i]]++;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> sss[i];
            p[sss[i]]++;
        }
        for (int i = 0; i < n; i++)
        {
            if (p[s[i]] == 1)
            {
                arr[0] += 3;
            }
            else if (p[s[i]] == 2)
            {
                arr[0] += 1;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (p[ss[i]] == 1)
            {
                arr[1] += 3;
            }
            else if (p[ss[i]] == 2)
            {
                arr[1] += 1;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (p[sss[i]] == 1)
            {
                arr[2] += 3;
            }
            else if (p[sss[i]] == 2)
            {
                arr[2] += 1;
            }
        }

        for (int i = 0; i < 3; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}