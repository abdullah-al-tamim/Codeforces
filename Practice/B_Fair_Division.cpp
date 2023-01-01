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
        vector<int> arr;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            arr.push_back(x);
        }
        ll sum = 0;
        sum = accumulate(arr.begin(), arr.end(), sum);
        if (sum % 2 == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            ll mid = sum/2;
            sort(arr.rbegin(), arr.rend());
            ll fsum = 0;
            for (int i = 0; i < n; i++)
            {
                if(fsum + arr[i] <= mid){
                    // cout << "Fsum: " << fsum << endl;
                    fsum += arr[i];
                }
            }
            // cout << fsum << endl;
            // cout << mid << endl;
            if(fsum == mid){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }
    }
}