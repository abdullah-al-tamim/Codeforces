#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;
        if(n == 1 and m == 1){
        cout << 0 << endl;
            continue;
        }
        if (m > n)
            swap(n, m);
        // long long ans = (m / 2 + (n - 1) + m / 2) + (m / 2 + 1 + m / 2);
        long long ans = (1+(n-1)+(m-2))+(2+m-2);
        cout << ans << endl;
    }
}