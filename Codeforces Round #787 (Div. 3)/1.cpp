#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, x, y;
        cin >> a >> b >> c >> x >> y;
        int count = 0;
        if ((a + c) >= x)
        {
            count++;
            x -= a;
            if (x > 0)
            {
                c -= x;
            }
        }
        // cout <<"x "<< x << " c " << c << endl;
        if ((b + c) >= y)
        {
            count++;
        }
        // if(dogf<0 || catf<0 && count<)
        // {
        //     cout << "NO" <<endl;
        // }else{
        //     cout << "YES" <<endl;
        // }
        if (count == 2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}