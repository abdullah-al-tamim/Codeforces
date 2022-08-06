#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--) {
        string s, ss;
        cin >> s >> ss;
        map<char, int> map2;
        map<char, int> map;
        for (int i = 0; i < map.size(); i++)
        {
            map[s[i]]++;
        }
        
        for (int i = 0; i < ss.size(); i++) 
        {
           map2[ss[i]]++; 
        }
        if (map2['a']>0 && map2.size()>1)
        {
            cout << -1 << endl;
            continue;
        }
        else{
            int count = 1;
            if (map2['a'] > 0 && map2.size() == 1){
                if(map2['a'] == 1){
                    cout << 1 <<endl;
                }else{
                    cout << map2['a'] << endl;
                }
            }else{
                cout << 
            }
        }
        
        
    }
}