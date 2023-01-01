#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n, a, b;
        cin >> n >> a >> b;
        if(n - a - b >= 2 or n == 1 or (n == a and n == b)){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
}