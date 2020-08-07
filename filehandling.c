#include<stdio.h>
#include<string.h>
void main()
{
	char ch[100];
	FILE *fp;
	int i;
	printf("Enter Data\n");
	gets(ch);
	fp=fopen("F:\file.txt","w");
	
	for(i=0;ch[i]!='\0';i++)
	{
		fputc(ch[i],fp);		
	}
		
	fclose(fp);
		
}
