#include<stdio.h>
#include<string.h>
struct student
{
	char name[50];
	int age;
	char gender;
	int rno;
	char branch[50];
}s[];
int main()
{
	int i,n;
	printf("Enter the number of entries:");
	scanf("%d",&n);
	getchar();
	for(i=1;i<=n;i++)
	{
		printf("\n\nEnter the details of %d student\n",i);
	printf("Enter Student name:");
	gets(s[i].name);
	printf("Enter student age:");
	scanf("%d",&s[i].age);
	getchar();
	printf("Enter Gender (F/M): ");
	scanf("%c",&s[i].gender);
	printf("Enter Roll no.:");
	scanf("%d",&s[i].rno);
	getchar();
	printf("Enter Branch Name:");
	gets(s[i].branch);
	}
	printf("Name\t|Age\t|Gender\t|RollNo.\t|Branch\t|\n");
	for(i=1;i<=n;i++)
	{
		printf("%s\t|%d\t|%c\t|%d\t|%s\t\t|\n",s[i].name,s[i].age,s[i].gender,s[i].rno,s[i].branch);
	}
}
