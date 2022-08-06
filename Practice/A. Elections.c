#include <stdio.h>
int main()
{
    int t;
    long arr[3];
    scanf("%d", &t);
    for (int j = 0; j < t; j++)
    {
        for (int i = 0; i < 3; i++)
        {
            scanf("%d", &arr[i]);
        }

        int max = arr[0];
        for (int i = 0; i < 3; i++)
        {
            // printf("%d",arr[i]);
            if (arr[i] >= max)
            {
                max = arr[i];
            }
        }
        // printf("%d\n", max);
        for (int i = 0; i < 3; i++)
        {
            if (max != 0)
            {

                if (max == arr[i])
                {
                    printf("%d ", max-arr[i]);
                }
                else
                {
                    printf("%ld ", (max + 1) - arr[i]);
                }
            } else{
                printf("%d ", 1);
            }
        }
        printf("\n");
    }
}