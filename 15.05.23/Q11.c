#include <stdio.h>
int main()
{
    int dis,time;
    float avg;

    printf("Enter distance travelled\t");
    scanf("%d",&dis);
    printf("Enter time taken\t");
    scanf("%d",&time);

    avg=(dis/time);

    printf("Average speed is:%.2f\t",avg);

}

