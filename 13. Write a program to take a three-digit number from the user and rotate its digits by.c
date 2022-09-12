#include <stdio.h>
int main()
{
    int num,rem, Newnum,dev,m,s,t;
   printf("Enter the number:  ");
   scanf("%d",&num);
   rem=num%10;
  dev=num/10;
  m=dev%10;
  s=dev/10;
  t=(m*10)+s;
  Newnum=(t*10)+rem;
  printf("New number will be %d",Newnum);
}
