#include<stdio.h>
int main()
{
    int a , b , c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    int max = a > b ? (a > c ? a : c) : (b > c ? b : c);
    int mid;
    if ((a >= b && a <= c) || (a <= b && a >= c))
    {
        mid = a;
    }
    else if ((b >= a && b <= c) || (b <= a && b >= c))
    {
        mid = b;
    }
    else
    {
        mid = c;
    }
    printf("%d", max+mid);
}