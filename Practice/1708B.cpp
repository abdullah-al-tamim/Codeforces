#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, l, r;

        cin >> n >> l >> r;

        int arr[n];
        bool flag = 1;
        for (int i = 1; i <= n; i++)
        {
            arr[i] = ((l-1)/i+1)*i;
            if(flag and arr[i] <= r) {
                flag = 1;
            }else{
                flag = 0;
            }
        }
        if(flag) {
            cout << "YES" << endl;
            for (int i = 1; i <= n; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
            
        }
        else {
            cout << "NO" << endl;
        }
        
    }
}