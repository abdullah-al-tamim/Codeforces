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
        int n;
        cin >> n;
        string s;
        cin >> s;
        string res = "", temp;
        for (int i = n-1; i >= 0; i--)
        {
            if(s[i] == '0')
            {
                temp = "";
                temp += s[i-2];
                temp += s[i-1];
                int num = stoi(temp);
                // cout <<"Num: "<< num <<endl;
                char a = int('a')+num-1;
                res += a;
                i-=2;
            }else{
                temp = "";
                temp+=s[i];
                int val = stoi(temp);
                // cout << "Val: " << val << endl;
                char a = int('a') + val-1;
                res += a;
            }
        }
        for (int i = res.length()-1; i >= 0; i--)
        {
            cout << res[i];
        }
        cout << endl;
        
        
    }
}