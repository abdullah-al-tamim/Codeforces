#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << n << "\n";
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            arr[i] = i + 1;
        }
        for (int i = 0; i < n; i++)
        {
            for (int i = 0; i < n; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
            if (i < n - 1)
                swap(arr[i], arr[i + 1]);
        }
    }
}