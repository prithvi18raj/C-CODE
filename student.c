#include<stdio.h>
#include<conio.h>
struct student
	{
		int roll_no;
		long long int contact_no;
		char name[50];
		char branch[50];
		char address[50];
	};
	
void main()
{
	int i;
	struct student s[5];
	printf("ENTER STUDENT DETAILS\n");
	for(i=0;i<2;i++)
	{
	printf("enter student roll no\n");
	scanf("%d",&s[i].roll_no);
	printf("enter student contact no\n");
	scanf("%lld",&s[i].contact_no);
	printf("enter student name\n");
	fflush(stdin);
	gets(s[i].name);
	printf("enter student branch\n");
	fflush(stdin);
	gets(s[i].branch);
	printf("enter student address\n");
	fflush(stdin);
	gets(s[i].address);
	}
	for(i=0;i<2;i++)
	{
	printf("STUDENT DETAILS IS\n :");
	printf("ROLL NO=%d\n",s[i].roll_no);
	printf("CONTACT NO=%lld\n",s[i].contact_no);
	printf("STUDENT NAME IS %s\n",s[i].name);
	printf("BRANCH IS %s\n",s[i].branch);
	printf("ADDRESS IS %s\n",s[i].address);
    }
	
	getch();
}
