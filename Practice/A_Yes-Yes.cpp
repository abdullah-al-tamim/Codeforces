#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        string res = "";
        for (int i = 0; i < 50; i++)
        {
            res += "Yes";
        }
        if (res.find(str) != string::npos)
        {
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}