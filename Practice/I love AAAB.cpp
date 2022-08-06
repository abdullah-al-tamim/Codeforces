#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (s.size() == 1)
        {
            cout << "NO" << endl;
            continue;
        }
        

        if (s[0] != 'B' && s[s.size()-1]  == 'B')
        {
            int i;
            int count = 0;
            for ( i = 0; i < s.size(); i++)
            {
                // if(s[i] == 'B' && s[i+1] == 'B' ){
                //     cout << "NO" << endl;
                //     break;
                // }
                if (s[i] == 'A' )
                {
                    count++;
                }else {
                    count--;
                }
                if (count<0)
                {
                    cout << "NO" << endl;
                    break;
                }
                
                
            }
            if (i == s.size())
            {
                cout << "YES" << endl;
            }else
            
        }
    }
}