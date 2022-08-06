#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if(n == 1){
            cout << 1 << endl;
        }else{
            int arr[n+5];
            // arr[1] = 2;
            // arr[2] = 1;
            // for (int i = 3; i < n; i++)
            // {
            //     arr[i] = i+1;
            // }
            // arr[n] = 3;
            for (int i = 2; i <= n; i++)    
            {
                arr[i] = i-1;
            }
            arr[1] = n;
            
            for (int i = 1; i <= n; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
            
            
        }
    }
}