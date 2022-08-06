#include <bits/stdc++.h>
using namespace std;
using ll = long long;
struct ind{
    int index = 0, num = 0;
};
void solve()
{
    int n;
    cin >> n;
    int arr[n];
    map<int, ind> map;
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        map[arr[i]].num++;
        if (map[arr[i]].num > 1)
        {
            res = map[arr[i]].index;
        }
        map[arr[i]].index = i+1;
    }
    cout << res << endl;
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
