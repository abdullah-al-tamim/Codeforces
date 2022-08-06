#include<stdio.h>
#include<stdlib.h>
int main()
{
    while(1){
  int coins;int v;
    scanf("%d",&v);
    int m[100000];
    for(int i=0; i<m; i++){
    scanf("%d",&m[i]);}
    minCoins(coins, m, v);
    return 0;
    }
}

int minCoins(int coins[], int m, int V)
{
// base case
if (V == 0) return 0;

int res = INT_MAX;

// Try every coin that has smaller value than V
for (int i=0; i<m; i++)
{
	if (coins[i] <= V)
	{
		int sub_res = minCoins(coins, m, V-coins[i]);

		// Check for INT_MAX to avoid overflow and see if
		// result can minimized
		if (sub_res != INT_MAX && sub_res + 1 < res)
			res = sub_res + 1;
	}
}
return res;
}