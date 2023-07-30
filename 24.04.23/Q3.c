#include <stdio.h>
int main()
{
    int in;
    float fl;
    double dou;
    char ch[15];

    printf("Input integer\t");
    scanf("%d",&in);
    printf("Input float\t");
    scanf("%f",&fl);
    printf("Input bouble\t");
    scanf("%f",&dou);
    printf("Input char\t");
    scanf("%s",ch);
    printf("\n");
    printf("Integer: %d\n",in);
    printf("Float: %f\n",fl);
    printf("Double: %f\n",dou);
    printf("Char: %s\n",ch);
}

