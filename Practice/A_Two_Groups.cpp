#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long arr[n+4];
        long long res = 0;
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
            res += arr[i];
        }
        cout << abs(res) << endl;
        
    }
}