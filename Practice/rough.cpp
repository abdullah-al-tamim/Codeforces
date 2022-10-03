#include <bits/stdc++.h>
using namespace std;

int coin[10000];

int lowerBound(int key, int n)
{
    int l = 0, r = n - 1, ans = 0;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (coin[mid] <= key)
        {
            l = mid + 1;
            ans = mid;
        }
        else
            r = mid - 1;
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    int k;
    cin >> k;

    for (int i = 0; i < n; i++)
    {
        cin >> coin[i];
    }

    vector<pair<int, int>> nCoin;

    int lb, c;
    while (k != 0)
    {
        lb = lowerBound(k, n);
        while (coin[lb] < k)
        {
            if (coin[lb + 1] < k)
            {
                lb++;
            }
            else
                break;
        }

        c = k / coin[lb];
        nCoin.push_back({coin[lb], c});
        k = k % coin[lb];
    }

    for (auto i : nCoin)
    {
        cout << i.first << " " << i.second << endl;
    }
    return 0;
}