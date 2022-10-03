#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        if(m%2 ==0)
        {
            if(n%2 == 1){
                cout << "Burenka" << endl;
            }else{
                cout << "Tonya" << endl;
            }
        }else{
            if (n % 2 == 0)
            {
                cout << "Burenka" << endl;
            }
            else
            {
                cout << "Tonya" << endl;
            }
        }
    }
}