#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        ll arr[n];
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr+n);
        ll mn =  100000;
        for(int i = 1; i < n; i++)
        {
            mn = min(mn, arr[i]-arr[i-1]);
        }
        cout << mn << endl;
    }
}