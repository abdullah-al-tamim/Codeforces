#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    int i = 1;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if(c>b){
            if (a - 1 < abs(b - c) + (c-1)){
                cout << 1 << endl;
            }
            else if (a - 1 > abs(b - c) + (c - 1))
            {
                cout << 2 <<endl;
            }
            else cout << 3 << endl;
        }else{
            if (a - 1 < abs(b - 1) )
            {
                cout << 1 << endl;
            }
            else if (a - 1 > abs(b - 1))
            {
                cout << 2 << endl;
            }
            else
                cout << 3 << endl;
        }
    }
}