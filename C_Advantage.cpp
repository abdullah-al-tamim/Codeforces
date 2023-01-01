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
        ll brr[n];
        map<int, int> map;
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
            brr[i] = arr[i];
            map[arr[i]]++;
        }
        sort(brr, brr + n);
        for(int i = 0; i < n; i++)
        {
            if (arr[i] == brr[n - 1]){
                cout << arr[i]-brr[n-2]<<" ";

            }else{
                cout << arr[i] - brr[n - 1] << " ";
            }
        }
        cout << endl;
    }
}