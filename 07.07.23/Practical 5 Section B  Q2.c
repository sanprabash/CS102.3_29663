#include <stdio.h>

int main()
{
    int mark,count,max,min,tot=0;
    float avg;
    printf("Enter the marks\n");
    scanf("%d",&mark);

    max=mark;
    min=mark;
    for(count=0;count<9;count++)
    {
        scanf("%d",&mark);
        tot+=mark;
        if(max<mark)
        {
            max=mark;
        }

        if(min>mark)
        {
            min=mark;
        }
    }
    avg=(float)tot/10;

    printf("The maximum number is %d\n",max);
    printf("The minimum number is %d\n",min);
    printf("The average is %f",avg);


    return 0;
}
