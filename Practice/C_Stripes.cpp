#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string arr[8];
        map<char, int> map;
        string res = "B";
        for (int j = 0; j < 8; j++)
        {
            cin >> arr[j];
            int c = 0;
            for (int k = 0; k < arr[j].length(); k++)
            {
                // map[arr[j][k]]++;
                if (arr[j][k] == 'R')
                {
                    c++;
                }
            }
            if (c == 8)
            {
                res = 'R';
            }
        }
        cout << res << endl;
    }
}