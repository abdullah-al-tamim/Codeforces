#include <bits/stdc++.h>
using namespace std;
struct bishop{
    int value, a, b;
};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string arr[8];
        for (int i = 0; i < 8; i++)
        {
            cin >> arr[i];
        }
        int a, b, pre, post;
        bishop list[8];
        for (int i = 0; i < 8; i++)
        {
            int count = 0;
            for (int j = 0; j < 8; j++)
            {
                if (arr[i][j] == '#')
                {
                    count++;
                    a = i;
                    b = j;
                }
            }
            list[i].value = count;
            list[i].a = a;
            list[i].b = b;
        }
        for (int i = 0; i < 8; i++)
        {
            if(list[i].value == 1 && list[i-1].value == 2 && list[i+1].value == 2){
                cout << list[i].a+1 << " " << list[i].b+1<<endl;
            } 
        }
        
    }
}