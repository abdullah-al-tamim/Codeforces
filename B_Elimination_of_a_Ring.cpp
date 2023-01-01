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
        vector<ll> arr;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            arr.push_back(x);
        }
        ll count = 0;
        // if (arr.size() == 1)
        // {
        //     count++;
        // }
        // else
        {

            for (ll j = 0; j < arr.size(); j++)
            {

                for (ll i = 0; i < arr.size(); i++)
                {

                    if (i == 0)
                    {
                        if (arr.size() - 1 > 0 and arr[1] != arr[arr.size() - 1])
                        {
                            count++;
                            arr.erase(arr.begin() + i);
                            // cout << "C 0: " << count << " i: " << i << endl;
                            // cout << "Size" << arr.size() << endl;
                        }
                    }
                    else if (i == arr.size() - 1)
                    {
                        if (arr.size() - 2 >= 0 and arr[arr.size() - 2] != arr[0])
                        {
                            count++;
                            arr.erase(arr.begin() + i);
                            // cout << "C 1: " << count << " i: " << i << endl;
                            // cout << "Size" << arr.size() << endl;
                        }
                    }
                    else
                    {
                        if (i - 1 >= 0 and i + 1 < arr.size() and arr[i - 1] != arr[i + 1])
                        {
                            count++;
                            arr.erase(arr.begin() + i);
                            // cout << "C 2: " << count << " i: " << i << endl;
                            // cout << "Size" << arr.size() << endl;
                        }
                    }
                }
            }
            // if (arr.size() % 2 == 0)
            // {
            //     cout << arr.size()<<endl;
            //     count += (arr.size() / 2);
            // }
            // else
            // {
            //     cout << arr.size() << endl;
            if (arr.size() > 1){

                count += (arr.size() / 2) + 1;
            }
            // }
        }
        if(n == 1){
            count = 1;
        }
        cout << count << endl;
    }
}