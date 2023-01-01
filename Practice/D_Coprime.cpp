
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
        int arr[n + 2];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        
    }
}
