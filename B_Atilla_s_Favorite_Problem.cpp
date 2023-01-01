#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string str;
        cin >> str;
        sort(str.begin(), str.end());
        cout << int(str[n-1])-97+1<< endl;
    }
}