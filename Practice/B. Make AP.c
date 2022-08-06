#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int a, b, c;
        scanf("%d", &a);
        scanf("%d", &b);
        scanf("%d", &c);

        int na = b - (c - b);
        if (na >= a && na % a == 0 && na != 0)
        {
            printf("YES\n");
            continue;
        }

        int nb = a + (c - a) / 2;
        if (nb >= b && (c - a) % 2 == 0 && nb != 0)
        {
            printf("YES\n");
            continue;
        }

        int nc = a + 2 * (b - a);
        if (nc >= c && nc % c == 0 && nc != 0)
        {
            printf("YES\n");
            continue;
        }

        printf("NO\n");
    }
}