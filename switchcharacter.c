#include<stdio.h>
//#include<conio.h>
void main()
{
	char n;
	printf("a.) Case A\n");
	printf("b.) Case B\n");
	printf("Enter a Choice:");
	scanf("%c",&n);
	switch(n)
	{
	case 'a': printf("Case A selected\n");
	break;
	case 'b': printf("Case B selected\n");
	break;
	default : printf("Wrong Choice\n");
	}
}
