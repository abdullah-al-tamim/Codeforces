#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int arr[n + 1];
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }
        string s = "B";
        for (int i = 1; i <= m; i++)
        {
            s += "B";
        }
        int in = -1, j = 1;
        for (int i = 1; i <= n ; i++, j++)
        {

            {
                
                if (arr[i] < m + 1 - arr[i] and s[arr[i]] != 'A')
                {
                    in = arr[i];
                }
                else
                {
                    in = m + 1 - arr[i];
                    if (s[in] == 'A')
                        in = arr[i];
                }
                s[in] = 'A';
            }
        }
        for (int i = 1; i <= m; i++)
        {
            cout << s[i];
        }
        cout << endl;
    }
}