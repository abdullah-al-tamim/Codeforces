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
        map<int, bool> map;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            map[arr[i]] = true;
        }
        int count = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (map[arr[i]])
            {
                count++;
                map[arr[i]] = false;
            }
            else
            {
                break;
            }
        }
        // cout << n << " " << count << endl;
        cout << n - count << endl;
    }
}