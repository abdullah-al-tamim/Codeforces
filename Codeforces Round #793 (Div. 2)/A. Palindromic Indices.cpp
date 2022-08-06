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
        string s;
        cin >> s;
        int count, i, j;
        if (s.size() % 2 == 1)
        {
            count = 1;
            i = n / 2 - 1;
            j = n / 2 + 1;
        }
        else
        {
            i = n / 2 - 1;
            j = n / 2;

            count = 0;
        }
        while (i >= 0 && j < s.size())
        {
            cout << i << " " << j << endl;
            // if (s[i + 1] == s[j - i+1] && s[i] == s[i + 1])
            // {
            //     cout << "and: " << s[i + 1] <<i+1 << " " << s[j - i] << j-i+1 << " " << s[i] << " " << s[i + 1] << endl;
            //     count += 2;
            // }
            // else if (s[i + 1] == s[j - i +1])
            // {
            //     cout << "Not and: " << s[i + 1] << " " << s[j - i] << endl;
            //     count++;
            // }
            if (s.size() % 2 == 0)
            {
                if (s[i] == s[j] && s[i - 1] == s[i])
                {
                    count += 2;
                }
            }
            i--;
            j++;
        }
        cout << count << endl;
    }
}