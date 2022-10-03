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
        string s, ss;
        cin >> s >> ss;
        int i;
        for ( i = 0; i < n; i++)
        {
            if ((s[i] == 'R' and ss[i] != 'R') || (ss[i] == 'R' and s[i] != 'R'))
            {
                cout << "No" << endl;
                break;
            }
        }
        if(i == n)
        cout << "YES" << endl;
        
    }
}