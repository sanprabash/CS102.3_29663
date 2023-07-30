#include <stdio.h>

int main()
{
        int x,count23,neg=0,pos=0,zero=0;
    printf("Enter 10 numbers \n");
    for(count23=0;count23<10;count23++)
    {
        scanf("%d",&x);
        if(x==0)
        {
            zero++;
        }
        else if(x<0)
        {
            neg++;
        }
        else
        {
            pos++;
        }
    }
    printf("There are %d positive numbers, %d negative numbers and %d zeros.",pos,neg,zero);


    return 0;
}
