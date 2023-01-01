#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll arr[n];
        map<ll, ll> map;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            map[arr[i]]++;
        }
        int count = 0;
        int flag = 1;
        int prev_ind = -1;
        for (int i = 1; i < n; i++)
        {
            if(arr[i] > arr[i-1]){
                prev_ind = i;
                break;
            }
        }
        for(int i = n-1; i > prev_ind; i--)
        {
            if(arr[i] < arr[i-1]){
                cout << "NO" << endl;
                flag = 0;
                break;
            }
        }
        if (flag)
        {
            cout << "YES" << endl;
        }
        // else
        // {
        //     // cout <<count << endl;
        //     cout << "NO" << endl;
        // }
    }
}