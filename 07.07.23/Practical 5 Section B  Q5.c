#include<stdio.h>
int main()
{
    int empno,y,x,over,count1=0,count2=0,per=0;
    printf("Enter your employee number and OT hours worked\n");
    for(x=0;x==0;)
    {
        scanf("%d %d",&empno,&y);
        if(empno==-999)
        {
            x=1;
        }

        if(y<=40)
        {
            over=y*150;
        }
        else
        {
            over=y*200;
        }

        if(over>=4000)
        {
            count2++;
        }
        count1++;
        printf("Employee no: %d\n",empno);
        printf("OT payment: %d\n\n",over);
    }
    per=((float)count2/count1)*100;
    printf("The percentage of employees whose OT Payment exceeding the Rs. 4000/- is %d%%",per);
    return 0;
}
