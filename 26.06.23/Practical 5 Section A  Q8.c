#include<stdio.h>
int main ()
{
    int gh,hj=0,et=0,count5=0,et3=0,total3=0,nh=1,count6=0,ls=0;
    printf("Enter a number t\n");
    scanf("%d",&gh);
    hj=gh;
    ls=gh;

    for(;hj>0;hj/=10)
    {
        et=hj%10;
        count5+=1;
    }

    for(;gh>0;gh/=10)
    {
        et3=gh%10;
        if(count5==0)
        {
            nh=1;
        }
        else
        {
            count6=count5;
            nh=1;
            for(;count6>0;count6--)
            {
                nh=nh*et3;
            }
        }
        total3+=nh;
    }

    if(total3==ls)
    {
        printf("This is an Armstrong Number");
    }
    else
    {
        printf("This is not an Armstrong Number");
    }
    return 0;
}
