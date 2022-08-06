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
        string str;
        cin >> str;
        map<char, int> map;
        for (int i = 0; i < n; i++)
        {
            map[str[i]]++;
        }
        int sum = 0;
        sum = map.size() * 2;
        for (auto i : map)
        {
            sum += i.second - 1;
        }
        cout << sum << endl;
    }
}