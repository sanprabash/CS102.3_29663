#include<stdio.h>
int main()
{
    int choice;
    float radius,result;
    printf("Menu\n");
    printf("Circumference of a circle -> 1\n");
    printf("Area of a circle          -> 2\n");
    printf("Volume of a sphere        -> 3\n");
    printf("\n\n");
    printf("Enter your choice 1-4 :");
    scanf("%d",&choice);
    printf("Enter radius :");
    scanf("%f",&radius);

    switch(choice)
    {
    case 1:
        result =2*3.14159*radius;
        printf("%.2f is circumference of the circle",result);
        break;

    case 2:
        result =3.14159*radius*radius;
        printf("%.2f is area of the circle",result);
        break;

    case 3:
        result =(4.0/3.0)*3.14159*radius*radius*radius;
        printf("%.2f is volume of the circle",result);
        break;

    default:
        printf("Invalid choice.\n");
        break;
    }
    return 0;
}
