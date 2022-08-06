#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        map<char, int> m;
        int c = 0;
        for (unsigned int i = 0; i < s.length(); i++)
        {
            m[s[i]]++;
            if (m.size() > 3)
            {
                m.clear();
                m[s[i]]++;
                c++;
            }
        }
        if (m.size() <= 3 and m.size() > 0)
        {
            c++;
        }
        cout << c << endl;
    }
}