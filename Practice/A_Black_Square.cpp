#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d ;
    int res = 0;
    string str;
    cin >> str;
    for(int i = 0; i < str.length(); i++)
    {
        if (str[i] == '1') res += a;
        else if (str[i] == '2') res += b;
        else if (str[i] == '3') res += c;
        else if (str[i] == '4') res += d;
    }
    cout << res << endl;
}