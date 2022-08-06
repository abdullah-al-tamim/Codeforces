#include <bits/stdc++.h>
using namespace std;
struct bishop
{
    int value, a, b;
};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, s;
        cin >> n >> s;
        int sum = 0;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        if (sum < s)
        {
            cout << -1 << endl;
            continue;
        }
        else
        {
            int count = 0;
            int i = 0, j = n - 1;
            while (sum > s)
            {
                int ic = 0, jc = 0;
                if (arr[i] == 1 && arr[j] == 0)
                {
                    count++;
                    i++;
                    sum -= arr[i];
                }
                else if (arr[i] == 0 && arr[j] == 1)
                {
                    count++;
                    // cout << 'h';
                    j--;
                    sum -= arr[j];
                }
                else
                {
                    if (arr[i] == 0 && arr[j] == 0)
                    {
                        int tempi = i, tempj = j;
                        while (arr[tempi] == 0 && arr[tempj] == 0)
                        {
                            ic++;
                            jc++;
                            tempi++;
                            tempj--;
                        }
                        if (arr[tempi] == 1)
                        {
                            count += ic;
                            i = tempi;
                        }
                        else
                        {
                            count += jc;
                            j = tempj;
                        }
                    }
                    else
                    {
                        count++;
                        i++;
                        sum -= arr[i];
                    }
                }
            }
            cout << count << endl;
        }
    }
}