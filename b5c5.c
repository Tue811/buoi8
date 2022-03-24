#include <stdio.h>
#include <math.h>

int main()
{
    int a[100];
    int b[100];
    int c[100];
    int d[100];
    int n;
    int max, min;
    printf("nhap n= ");
    scanf("%d", &n);
    printf("nhap day a\n");
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("nhap day b\n");
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &b[i]);
    }
    printf("nhap day c\n");
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &c[i]);
    }
    printf("nhap day d\n");
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &d[i]);
    }
    for (int i = 1; i <= n; i++)
    {
        max = fmax(fmax(a[i], b[i]), fmax(c[i], d[i]));
        min = fmin(fmin(a[i], b[i]), fmin(c[i], d[i]));
        printf("max%d= %d\n", i, max);
        printf("min%d= %d\n", i, min);
    }
    return 0;
}