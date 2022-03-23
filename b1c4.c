//to chuc nhap 1 ma tran nguyen cap 6x6 duoi dang mot bang 6 dong 6 cot//
#include<stdio.h>
int main()
{
    int n,m;
    int a[100][100];
    printf("nhap so hang: ");
    scanf("%d",&n);
    printf("nhap so cot: ");
    scanf("%d",&m);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("a[%d][%d]=  ",i,j);
            scanf("%d", &a[i][j]);
        }
    }
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%5d",a[i][j] );
        }
        printf("\n");
    }
    
}