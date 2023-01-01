#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        int arr[4], brr[4];
        for(int i = 0; i < 4; i++)
        {
            cin >> arr[i];
        }
        swap(arr[2], arr[3]);
        int j;
        for( j = 0; j < 10; j++)
        {
            int temp = arr[3];
            for (int i = 3; i > 0; i--)
            {
                arr[i] = arr[i - 1];
            }
            arr[0] = temp;
            // cout << arr[0] << " " << arr[1] << " " << arr[2] <<" " << arr[3] << endl;
            if(arr[0] < arr[1] and arr[0] < arr[3] and arr[1] < arr[2] and arr[3] < arr[2]){
                cout << "YES" << endl;
                break;
            }
        }
        if(j == 10)
        {
            cout << "NO" << endl;
        }
        


    }
}