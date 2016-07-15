#include<stdio.h>
int main()
{
int num,rem,rev=0;
printf("\n enter any number to be reversed");
scanf("%d",&num);
while(num>=1)
{
rem=num%10;
rev=rev*10+rem;
num=num/10;
}
printf("\n reversed number:%d",rev);
return 0;
}
