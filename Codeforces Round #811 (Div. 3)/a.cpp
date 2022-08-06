#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve()
{
    int n, h, m;
    cin >> n >> h >> m;
    int arr[n][2];
    int curr = 60 * h +m;
    int ans = 1e5;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i][0] >> arr[i][1];
        int t = 60*arr[i][0]+arr[i][1] - curr;
        if(t<0) t+= 24*60;
        ans = min(ans, t);
    }
    cout << ans/60 << " " << ans%60 <<endl;


    
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
