#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int mn = *min_element(arr, arr+n);
        if(mn == arr[0]) cout << "Bob" <<endl;
        else cout << "Alice" << endl;

    }
}