#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        string str;
        cin>>str;
        map<char, long long> map;
        long long co = 0, cz = 0, mxo = 0, mxz = 0;
        for(long long i = 0; i < n; i++)
        {
            map[str[i]]++;
            if(str[i] == '0'){
                cz++;
                mxz = max(mxz, cz);
                co = 0;
            }
            else{
                co++;
                mxo = max(mxo, co);
                cz = 0;
            }
        }
        // cout << mxo<< " " <<mxz<<endl;
        long long val = map['1']*map['0'];
        // if(mxo*mxo >= mxz*mxz and mxo*mxo >= val){
        //     cout << mxo*mxo << endl;
        // }
        // else if (mxo * mxo <= mxz * mxz and mxz * mxz >= val){
        //     cout << mxz*mxz << endl;
        // }else{
        //     cout << val << endl;
        // }
        cout << max(mxo*mxo , max(mxz*mxz , val)) << endl;
    }
}