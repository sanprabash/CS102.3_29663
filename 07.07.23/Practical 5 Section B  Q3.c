#include <stdio.h>

int main()
{
    int x,count,y=0,sum0=0;
    float avar;
    printf("Enter items prices\n");
    for(count=0;count<10;count++)
    {
        scanf("%d",&x);
        sum0+=x;
        if(x>200)
        {
            y++;
        }
    }
    avar=(float)sum0/10;
    printf("The average value is %f\n",avar);
    printf("The number of items greater than 200 is %d",y);
    printf("\n\n");

    return 0;
}
