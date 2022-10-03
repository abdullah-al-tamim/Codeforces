#include <bits/stdc++.h>
using namespace std;
long long gcd(long long int a, long long int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

long long lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        // int a, b;
        // cin >> a >> b;
        // cout << lcm(a, b) << endl;
        // cout << n;
        if(n%2 == 0){
        for (int i = 2; i <= n; i+=2)
        {
            cout << i<<" " << i-1<<" ";
        }
        cout << endl;}
        else{
            cout << 1<<" ";
            for (int i = 3; i <= n; i+=2)
            {
                cout << i<<" " << i-1<<" ";
            }
            cout << endl;
        }
        
    }
}
