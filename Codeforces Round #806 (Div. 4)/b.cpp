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
        string s;
        cin >> s;
        map<char, int> map;
        for (int i = 0; i < n; i++)
        {
            map[s[i]]++;
        }
        int sum = map.size()*2;
        for (auto i : map)
        {
            sum+=i.second-1;
        }
        
        cout << sum << endl;
        
    }
}