#include<stdio.h>
int main()
{
    int Num,unitdigit;
    printf("Enter a number: ");
    scanf("%d",&Num);
    unitdigit=Num%10;
    printf("The unit digit of this number is %d",unitdigit);
    return 0;
}