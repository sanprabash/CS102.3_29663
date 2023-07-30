#include<stdio.h>
int main()
{
    int num1,num2,num3,max,min;

    printf("Enter three numbers");
    scanf("%d %d %d",&num1,&num2,&num3);

    if(num1==num2&&num2==num3)
    {
        printf("All three numbers are the same\n");
    }
    else
  {
    max=num1;
    min=num1;

    if(num2>max)
    {
        max=num2;
    }
    if(num3>max)
    {
        max=num3;
    }
    if(num2<min)
    {
        min=num2;
    }
    if(num3<min)
    {
        min=num3;
    }

    printf("Largest number:%d\n",max);
    printf("Smallest number:%d\n",min);
  }
    return 0;
}
