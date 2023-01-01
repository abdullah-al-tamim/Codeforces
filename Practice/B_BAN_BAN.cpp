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
        int p = 1, q= n*3;
        if (n==1){
            cout << 1<< endl;
            cout << 1<<" " <<2<<endl;
            continue;
        }
        cout << ((n+1)/2) << endl;
        for (int i = 1; i <= ((n+1)/2); i++)
        {
            cout << p << " " <<q<< endl;
            p += 3;
            q -= 3;
        }
        
    }
}