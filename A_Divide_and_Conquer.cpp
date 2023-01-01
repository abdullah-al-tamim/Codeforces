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
        ll sum = 0;
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        int i =0;
        ll count = 0;
        while(sum %2 != 0){
            // cout << arr[0] << endl;
        sort(arr, arr + n);
            count++;
            bool flag = 1;
            for(int j = 0; j < n; j++)
            {
                if((arr[j]/2) %2==1){
                    if(arr[j]%2==1){
                        sum -= floor(arr[j]/2)+1;
                    }else{
                        sum -= floor(arr[j]/2);
                    }
                    arr[j] = floor(arr[j]/2);
                    flag = 0;
                }
            }

            if(sum%2 == 0){
                break;
            }
            else
            {
                if(flag){
                    if (arr[i] % 2 == 1)
                    {
                        sum -= floor(arr[i] / 2) + 1;
                    }
                    else
                    {
                        sum -= floor(arr[i] / 2);
                    }
                    arr[i] = floor(arr[i] / 2);
                }
                
            }
        }
        cout << count << endl;

    }
}