#include <stdio.h>

int main()
{
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 11; j++)
        {
            if((i == 1 && j == 5)
             ||(i == 2 && (j == 4 || j == 5||j==6))
             ||(i==3&&(j==3||j==4||j==5||j==6||j==7))
             ||(i==4&&(j==2||j==3||j==4||j==5||j==6||j==7||j==8)))
            {
                printf("  ");
            }
            else{
                printf("* ");
            }
        }
        printf("\n");
    } 
    return 0;
}