#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<char, int> map;
    string alp = "abcdefghijklmnopqrstuvwxyz";
    for (int i = 0; i < 26; i++)
    {
        map[alp[i]] = i + 1;
    }
    // for (auto i : map)
    // {
    //     cout << i.first << " " << i.second << endl;
    // }

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        // sort(s.begin(), s.end(), compare);
        // cout << s << endl;
        int sum1 = 0, sum2 = 0;
        if (s.size() % 2 == 0)
        {
            for (int i = 0; i < s.size(); i++)
            {
                sum1 += map[s[i]];
            }
            // cout << sum << endl;
        }
        else
        {
            if(map[s[0]]>=map[s[s.size()-1]]){
                for (int i = 0; i < s.size()-1; i++)
                {
                    sum1 += map[s[i]];
                }
                sum2 = map[s[s.size()-1]];
            }else{
                for (int i = 1; i < s.size() ; i++)
                {
                    sum1 += map[s[i]];
                }
                sum2 = map[s[0]];
            }
        }
        if (sum1 > sum2)
        {
            cout << "Alice " << abs(sum1 - sum2) << endl;
        }
        else
        {
            cout << "Bob " << abs(sum1 - sum2) << endl;
        }
    }
}