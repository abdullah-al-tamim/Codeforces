#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >>b;
        string str = "";
        while(a>0 & b>0){
            str+="01";
            a--;
            b--;
        }
        while(a>0)
        {
            str+="0";
            a--;
        }
        while(b>0)
        {
            str+="1";
            b--;
        }
        cout << str << endl;
    }
}
