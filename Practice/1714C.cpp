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
        vector<int> v;
        int i = 9;
        while (n >= 0)
        {

            if (n > 9)
            {
                n -= i;
                v.push_back(i);
                i--;
            }
            else if (n <= 9 and n >= 0)
            {
                bool flag = true;
                for (int i = 0; i < v.size(); i++)
                {
                    if (v[i] == n)
                    {
                        flag = false;
                    }
                }
                if (flag)
                {
                    v.push_back(n);
                    n = 0;
                    break;
                }else{
                    n -= i;
                    v.push_back(i);
                    i--;
                }
            }
            else
            {
                i--;
            }
        }
        for (int i = v.size()-1; i >=0; i--)
        {
            cout << v[i] ;
        }
        cout << endl;
    }
}