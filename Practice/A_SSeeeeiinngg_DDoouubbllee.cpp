#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
   ll t;
   cin >> t;
   while (t--)
   {
        string s;
        cin >> s;
        string temp = s;
        reverse(temp.begin(), temp.end());
        cout << s << temp << endl;
   }  
}