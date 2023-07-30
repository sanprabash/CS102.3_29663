#include <stdio.h>
int main()
{
       printf("the color:%s\n","blue");               //”blue” was given as output
       printf("First number:%d\n",12345);      // “12345” was given as output
       printf("Second number:%04d\n",25);  //it was printed as “0025” as it is 4 digits
       printf("Third number:%i\n",1234);      //“1234” was given as output
       printf("Float number:%3.2f\n",3.14159); //it prints  “3.14159” as “3.14”
       printf("Hexadecimal:%x\n",255);       //it prints the number “255” as “ff”
       printf("Octal:%o\n",255);                  //it prints the number “255” as “377”
       printf("Unsigned value:%u\n",150); //it prints the number “150”
       printf("Just print the percentage sing%%\n",10); //it prints “%”
}

