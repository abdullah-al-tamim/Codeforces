#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        int arr[4];
        for (int i = 1; i <= 3; i++)
        {
            cin >> arr[i];
        }
        if (arr[x] != 0 and arr[arr[x]] != 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}