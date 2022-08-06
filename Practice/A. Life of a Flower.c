#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int days;
        scanf("%d", &days);
        int arr[days];
        int height = 1;
        for (int i = 0; i < days; i++)
        {
            scanf("%d", &arr[i]);
        }

        for (int i = 0; i < days; i++)
        {
            if (arr[i] == 1)
            {
                height++;
            }
            if (i > 0)
            {
                if (arr[i] == 0 && arr[i - 1] == 0)
                {
                    height = -1;
                    break;
                }
                else if (arr[i] == 1 && arr[i - 1] == 1){
                    height+=4;
                }
            }
        }
        printf("%d\n", height);
    }
}