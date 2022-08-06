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
        int arr[n];
        priority_queue<int, vector<int>, greater<int>> g;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            g.push(arr[i]);
        }
        // while (!g.empty())
        // {
        //     cout << g.top() << " ";
        //     g.pop();
        // }
        // cout << endl;
        int brr[n];
        int last = g.top();
        for (int i = 0; i < n; i++)
        {
            if (arr[i] != g.top())
            {
                brr[i] = g.top();
                last = g.top();
                g.pop();
            }
            else
            {
                if (g.size() == 1)
                {
                    brr[i] = brr[i - 1];
                    swap(brr[i - 1], last);
                }
                else
                {
                    int temp = g.top();
                    g.pop();
                    brr[i] = g.top();
                    last = g.top();
                    g.pop();
                    g.push(temp);
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << brr[i] << " ";
        }
        cout << endl;
    }
}