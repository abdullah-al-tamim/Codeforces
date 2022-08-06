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
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int count = 0;
        int check = 0;
        if (n == 1)
        {
            cout << 0 << endl;
            continue;
        }

        
        bool flag = false;
        for (int i = n - 1; i > 0; i--)
        {

            while (arr[i - 1] >= arr[i])
            {
                if (i != 0 && arr[i - 1] == 0)
                {
                    flag = true;
                    break;
                }
                arr[i - 1] = arr[i - 1] / 2;
                count++;
            }
            // if (arr[i-1] == arr[i])
            // {
            //     arr[i - 1] = arr[i - 1] / 2;
            //     count++;
            // }
        }
        if (flag)
        {
            cout << -1 << endl;
        }
        else
            cout << count << endl;
    }
}