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
        char arr[n];
        cin >> arr;
        // cout << arr << endl;
        if (n < 2)
        {
            cout << "NO" << endl;
            continue;
        }
        if (n == 2)
        {
            if (arr[0] == 'R' && arr[1] == 'B')
            {
                cout << "YES" << endl;
                continue;
            }
            else if (arr[0] == 'B' && arr[1] == 'R')
            {
                cout << "YES" << endl;
                continue;
            }
            else
            {
                cout << "NO" << endl;
                continue;
            }
        }

        for (int i = 1; i < n; i++)
        {
            if ((arr[i] == 'B' && arr[i - 1] != 'R' && arr[i + 1] != 'R') ||
                (arr[i] == 'R' && arr[i - 1] != 'B' && arr[i + 1] != 'B'))
            {
                cout << "NO" << endl;
                break;
            }

            else if ((arr[i] == 'B' && arr[i - 1] == 'R') ||
                     (arr[i] == 'R' && arr[i - 1] == 'B'))
            {
                cout << "YES" << endl;
                break;
            }
        }
    }
}