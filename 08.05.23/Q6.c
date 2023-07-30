#include <stdio.h>
int main()
{
    char name[15];
    int byear,age;

    printf("Enter your name\t");
    scanf("%s",&name);
    printf("Enter your birth year\t");
    scanf("%d",&byear);

    age=2023-byear;

    printf("Your name and age is %s,%d",name,age);

}

