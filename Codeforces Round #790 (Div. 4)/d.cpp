#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];
        map<int , int > map;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            map[arr[i]]++;
        }
        sort(arr, arr + n);
        int l = arr[0], r = arr[n - 1];
        for (int i = 0; i < n; i++)
        {
            if(map[arr[i]]<k )
        }
        
        
    }
}