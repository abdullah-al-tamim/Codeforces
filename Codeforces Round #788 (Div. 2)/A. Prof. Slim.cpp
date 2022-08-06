#include <bits/stdc++.h>
#include <algorithm>
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
        int pos = 0;
        int check = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] > 0)
                pos++;
            if (i > 0 && arr[i] >= arr[i - 1])
                check++;
        }
        if (check == n - 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            bool flag = false;
            int j = n - 1;
            for (int i = 0; i < j; i++)
            {
                if (arr[i] > 0)
                {
                    while (arr[j] > 0 && j > i)
                    {
                        j--;
                    }
                    arr[j] = -1 * arr[j];
                    arr[i] = -1 * arr[i];
                }
                // cout << "iii " << i << endl;
                int p = 0;
                for (int i = 0; i < n; i++)
                {
                    if (i > 0 && arr[i] >= arr[i - 1])
                    {
                        p++;
                    }

                }
                if (p == n-1)
                {
                    flag = true;
                    break;
                }
                
            }
            // for (int i = 0; i < n; i++)
            // {
            //     cout << arr[i] << " ";
            // }
            // cout << endl;
            

            if (flag)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
}