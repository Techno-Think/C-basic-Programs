#include<stdio.h>
#include<string.h>
struct employInfo
{
	char name[50];
	int id;
	float salary;
}emp[100];
void main()
{
	int i,n;
	printf("Enter No. of employs:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter Details of Employ %d\n\n",i+1);
			getchar();
		printf("Enter Employ Name:");
		gets(emp[i].name); 
		printf("Enter id:");
		scanf("%d",&emp[i].id);
		printf("Enter salary:");
		scanf("%f",&emp[i].salary);
	}
	for(i=0;i<n;i++)
	{
		printf("Employ Name: %s\n",emp[i].name);
		printf("Employ id: %d\n",emp[i].id);
		printf("Employ salary: %f\n",emp[i].salary);
	}	
}
