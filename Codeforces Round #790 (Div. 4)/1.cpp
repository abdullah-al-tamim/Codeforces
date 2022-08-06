#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string arr;
        cin >> arr;
        int sum1 = 0, sum2 = 0;
        int j = 5;
        for (int i = 0; i < 3 && j >= 0; i++, j--)
        {
            sum1 += arr[i];
            sum2 += arr[j];
        }
        // cout << sum1 << " " << sum2 << endl;
        if (sum1 == sum2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}