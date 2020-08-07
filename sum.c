#include<stdio.h>
int main()
{
int i=1,sum=0,n;
printf("Enter the value of n:");
scanf("%d",&n);
while(i<=n)
{
sum=sum+i;
i++;
}
printf("%d\n",sum);

}
