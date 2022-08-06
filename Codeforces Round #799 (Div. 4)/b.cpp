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
        map<int, int> map;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            map[arr[i]]++;
        }
        int ans = 0, count = 0;
        for (auto i : map)
        {
            count += i.second - 1;
            // cout << i.second <<" ";
        }
        // if(map.size() == 1){
        //     cout << 0 << endl;
        //     continue;
        // }
        if (n % 2 == 0)
        {
            if (count % 2 == 0)
                ans = n - count;
            else
                ans = n-(count+1);
        }
        else
        {
            // cout <<endl<< count << endl;
            if (count % 2 == 0)
                ans = n - count;
            else
                ans = n - (count + 1);
        }
        cout << ans << endl;

        // sort(arr, arr+n);
        // for (int i = 0; i < n; i++)
        // {
        //     if (map[arr[i]] > 1)
        //     {

        //         ans += (map[arr[i]] - ans - 1);
        //     }
        //     map[arr[i]] = 0;
        // }
        // cout << ans << endl;
    }
}