#include <stdio.h>
int main()
{
    int num,digit, Newnum;
   printf("Enter the number:  ");
   scanf("%d",&num);
   
   printf("Enter a digit:  ");
   scanf("%d",&digit);
   
   Newnum=(num*10)+digit;
   printf("New number will be %d",Newnum);
   return 0;
}
