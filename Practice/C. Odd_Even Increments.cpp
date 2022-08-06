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
        int arr[n];
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (i > 0 && arr[i] % 2 != arr[i - 1] % 2)
            {
                flag = true;
            }
        }
        if (!flag)
        {
            cout << "YES" << endl;
            continue;
        }

        if (arr[0] % 2 == 1)
        {
            for (int i = 0; i < n; i += 2)
            {
                arr[i] += 1;
            }
            int i;
            for (i = 1; i < n; i++)
            {
                if (arr[i] % 2 != arr[i - 1] % 2)
                {
                    cout << "NO" << endl;
                    break;
                }
            }
            if (i == n)
            {
                cout << "YES" << endl;
            }
        }
        else
        {
            for (int i = 0; i < n; i += 2)
            {
                arr[i] += 1;
            }
            int i;
            for (i = 1; i < n; i++)
            {
                if (arr[i] % 2 != arr[i - 1] % 2)
                {
                    cout << "NO" << endl;
                    break;
                }
            }
            if (i == n)
            {
                cout << "YES" << endl;
            }
        }
    }
}