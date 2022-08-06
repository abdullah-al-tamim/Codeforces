#include<bits/stdc++.h>
using namespace std;
    
 void solve()
{
    int n, m;
    cin >> n >> m;
    string a, b;
    cin >> a >> b;
    int j = m - 1;
    for (int i = n - 1; j >= 1; i-- , j--)
    {
        if (a[i] != b[j])
        {
            cout << "NO" << endl;
            return;
        }
    }
    for (int i = 0; i <= n-m; i++)
    {
        if(a[i] == b[0])
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
}
