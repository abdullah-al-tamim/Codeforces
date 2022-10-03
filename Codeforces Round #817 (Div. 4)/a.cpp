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
        string c = "Timur"; // Timum
        T ---> true
        i ---> true;
        m ---> true
        u ---> true
        m ---> true
        int count = 0;
        map<char, bool> map;
        if (n != 5)
        {
            cout << "No" << endl;
        }
        else
        {
            for (int i = 0; i < s.length(); i++)
            {
                map[s[i]] = true;
            }
            int i;
            for ( i = 0; i < c.length(); i++)
            {
                if(map[c[i]] == false){
                    cout << "No" << endl;
                    break;
                }
            }
            if(i == c.length())
            cout << "YES" << endl;
            
        }
    }
}