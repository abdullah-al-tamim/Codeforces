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
        set<int> set;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if(arr[i] > arr[i-1] and i > 0)
            {
                set.insert(arr[i-1]);
            }else if(arr[i]<arr[i-1] and i >0)
            {
                set.insert(arr[i-1]);
                ans = set.size();
            }
            if(set.count(arr[i]))
                ans = set.size();
        }
        cout << ans << endl;  
    }
    
}