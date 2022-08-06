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
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int ecount = 0, ocount = 0;

        for (int i = 0; i < n; i++)
        {
            // if ((arr[i] + arr[i + 1]) % 2 == 1 && i + 1 < n)
            // {
            //     if (i + 2 < n)
            //     {
            //         count++;
            //         if ((arr[i] + arr[i + 2]) % 2 == 0)
            //         {
            //             cout << "Even: " << arr[i] << " " << arr[i + 2] << endl;
            //             // cout << "H";
            //             i++;
            //         }
            //     }
            //     else
            //     {
            //         cout << "H: " << arr[i] <<" " << arr[i + 1]<<endl;
            //         count++;
            //     }
            // }
            if (arr[i]%2 == 0)
            {
                ecount++;
            }else{
                ocount++;
            }
            
        }

        if (ecount>ocount)
        {
            cout << ocount << endl;
        }else{
            cout << ecount << endl;
        }
        
    }
}