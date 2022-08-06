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
        cout << 2 << endl;
        int arr[n + 5];
        memset(arr, 0, sizeof(arr));
        for (int i = 1; i <= n; i++)
            arr[i] = i;
        for (int i = 1; i <= n; i++)
        {
            // if (arr[i] == 0)
            // {
            //     arr[i] = i;
                // cout << "I " << i << endl;
                if (arr[i] * 2 <= n && i + 1 < n)
                {
                    swap(arr[i+1], arr[arr[i]*2]);
                    // arr[i + 1] = arr[i] * 2;
                    // arr[arr[i]*2] = i+1;
                    // i++;
                }
            // }
            // else
            // {
            //     arr[arr[i]] = i;
            // }
            // arr[i] = i;
        }

        for (int i = 1; i <= n; i++)
        {
            cout << arr[i] << " ";
        }

        cout << endl;
    }
}
