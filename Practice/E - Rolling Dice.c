#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    if (a <= b && b <= (a * 6))
    {
        printf("Yes");
    }
    else
        printf("No");
}