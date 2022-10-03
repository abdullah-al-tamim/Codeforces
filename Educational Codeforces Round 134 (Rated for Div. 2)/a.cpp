#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >>b;
        map<char, int>map;
        map[a[0]]++;
        map[a[1]]++;
        map[b[0]]++;
        map[b[1]]++;
        cout << map.size()-1 << endl;
    }
}