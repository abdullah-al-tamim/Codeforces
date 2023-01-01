#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll arr[4];
        for(int i = 0; i < 3; i++){
            cin >> arr[i];
        }
        sort(arr, arr+3);
        cout << arr[1] <<endl;

    }
}