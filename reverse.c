#include<stdio.h>
int main()
{
int i=1,n,r,rem=0;
printf("enter the number\n");
scanf("%d",&n);
while(n!=0)
{
r=n%10;
rem=rem*10+r;
n=n/10;
}
printf("rev: %d\n",rem);

}
