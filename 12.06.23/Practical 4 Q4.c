#include<stdio.h>
int main()
{
    char letter;

    printf("Enter letter :");
    scanf("%c",&letter);

    switch(letter)
    {
    case 'A':
    case 'a':
    case 'E':
    case 'e':
    case 'I':
    case 'i':
    case 'O':
    case 'o':
    case 'U':
    case 'u':
        printf("%c is a vowel letter",letter);
        break;
    default:
        printf("%c is not a vowel letter",letter);
        break;

    }
    return 0;
}
