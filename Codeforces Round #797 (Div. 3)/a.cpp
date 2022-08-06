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
        int a, b, c, d;
        a = (n / 3);
        b = (n / 3);
        c = n - (a + b);
        while (b >= a)
        {
            b--;
            a++;
        }
        while (c <= 0)
        {
            a--;
            c++;
        }
        if(c>b){
            swap(b, c);
            while (b >= a)
            {
                b--;
                a++;
            }
        }
        // while (b >= a)
        // {
        // }

        cout << b << " " << a << " " << c << endl;
    }
}