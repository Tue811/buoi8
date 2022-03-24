#include<stdio.h>
#include<math.h>

int main()
{
    int x,y,z;
    for (x=0;x<=200;x++)
    {
        for (y=0;y<=100;y++)
        {
            for (z=0;z<=40;z++)
            {
                if((x+2*y+5*z)==200)
                {
                    printf("x=%d, y=%d, z=%d\n",x,y,z);
                }
            }
        }
    }
    return 0;
}