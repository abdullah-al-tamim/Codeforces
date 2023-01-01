#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n; char c;
        cin >> n >> c;
        string str ;
        cin >> str;
        map<char, int> map;
        int fg = -1, lg = -1;
        int res = 0;
        str += str;
        for(int i = str.length()-1; i>=0; i--)
        {
            if (str[i] == 'g')
            {
                lg = i;
            }
            if(str[i] == c){
                res = max(res, (lg-i));
            }
        }
        cout << res <<endl;
    }
}