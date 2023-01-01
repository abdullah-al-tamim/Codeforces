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
        if( n %2== 1){
            for (int i = 0; i < n; i++)
            {
                cout << 1 << " " ;
            }
            cout << endl;
            
        }
        else{
            for (int i = 0; i < n-2; i++)
            {
                cout << 2 << " " ;
            }
            cout << 1 << " " << 3 << endl;
            
        }
    }
}