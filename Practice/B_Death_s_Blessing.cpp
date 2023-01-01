#include<bits/stdc++.h>
using namespace std;
struct node{
    int a, b;
};

bool compare(node aa, node bb) {
    return aa.b>bb.b;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        node arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i].a;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i].b;
        }
        node &min = *min_element(arr, arr + n ,compare);
        cout << min.a << endl;
        cout << min.b << endl;
    }
    
}