#include<stdio.h>
#include<conio.h>
void swap(int *x,int *y,int *z)
{
	//clrscr();
	printf("Before Swapping A=%d, B=%d\n",*x,*y);
	*z=*x;
	*x=*y;
	*y=*z;
	printf("After Swapping A=%d, B=%d\n",*x,*y);
}
void main()
{
	int a,b,c;
	printf("Enter Two Number: ");
	scanf("%d%d",&a,&b);
	swap(&a,&b,&c);
	//getch();
}
