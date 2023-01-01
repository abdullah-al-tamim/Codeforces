
#include <bits/stdc++.h>
using namespace std;
        int mem[1005][1005];
bool coprime(int a, int b)
{

    if (__gcd(a, b) == 1)
        return true;
    else
        return false;
}
int main()
{
    int t;
    cin >> t;
    for (int tc = 0; tc < t; tc++)
    {
        // cout << "HELLO" << endl;
        memset(mem, 0, 1005);
        int n;
        cin >> n;
        int arr[n+2];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int res;
        bool flag = false;
        int mx = -1;
        for (int i = n-1; i >= 0; i--)
        {
            for (int j = i; j >= 0; j--)
            {
                if(mem[arr[i]][arr[j]] == 0){
                    if(coprime(arr[i], arr[j])){
                        mem[arr[i]][arr[j]] = i+j+2;
                        if(i+j+2 > mx) mx = i+j+2;

                        cout << mx << endl;
                        // flag = true;
                        // break;
                    }
                }else {
                    if(mem[arr[i]][arr[j]]> mx)
                        mx = mem[arr[i]][arr[j]];}
            }
            // if(flag){
            //     break;
            // }
        }
        // if(!flag) cout << -1 << endl;
        cout << mx << endl;

    }
}
