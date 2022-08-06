#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    int flag = 1;

    for (int i = 0; i < t; i++)
    {

        int n, kk;
        scanf("%d", &n);
        scanf("%d", &kk);
        int a[n];
        int b[n];
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[j]);
        }
        for (int k = 0; k < n; k++)
        {
            scanf("%d", &b[k]);
        }
        sort(n, kk, a, b);


        // for (int i = 0; i < n; i++)
        // {
        //     printf("%d ", a[i]);
        // }
        // printf("\n");
        // for (int i = 0; i < n; i++)
        // {
        //     printf("%d ", b[i]);
        // }
        
        for (int i = 0; i < n; i++)
        {
            if (a[i]<=kk)
            {
                kk+=b[i];
            }
            
        }
        
        printf("%d\n", kk);
    }
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sort(int n, int kk, int a[], int b[])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                swap(&a[i], &a[j]);
                swap(&b[i], &b[j]);
            }
        }
    }
}