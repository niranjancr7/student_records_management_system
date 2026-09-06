#include "student.h"
void modify(void)
{
	char op1;
	printf("Enter which record to search for modification \n");
	printf("\n");
	printf("w/W : search by rollno \n");
	printf("x/X : search by name \n");
	printf("y/Y : search by percentage \n");
	scanf(" %c",&op1);
	switch(op1)
	{
		case 'w':
		case 'W':
			search_rollno();break;
		case 'x':
		case 'X':
			search_name();break;
		case 'y':
		case 'Y':
			search_percentage();break;
		default: printf("Invalid Choice \n");
			 break;
	}
}

void search_rollno(void)
{
	if(head==0)
	{
		printf("No records Available \n");
		return;
	}
	struct student *p=head;
	int num;
	printf("Enter the rollno to search \n");
	while(1)
	{
	scanf("%d",&num);
	if(num<=0)
		printf("Invalid Rollno enter again \n");
	else
		break;
	}
	int f=0;
	while(p)
	{
		if(num==p->rollno)
		{
			f=1;
			printf("%d %s %f\n",p->rollno,p->name,p->percentage);
			printf("Enter the name to update \n");
			while(1)
			{
				scanf("%s",p->name);
				int i=0,f1=1;
				while(p->name[i]!='\0')
				{
				if(!(p->name[i] >= 'a' && p->name[i] <= 'z') || (p->name[i] >= 'A' && p->name[i] <= 'Z') || p->name[i]== ' ')
					{
						f1=0;
						break;
					}
				i++;
				}
				if(f1==1)
					break;
				printf("Invalid name Enter again \n");
			}
			printf("Enter the percentage to update \n");
			while(1)
			{
				scanf("%f",&p->percentage);
				if(p->percentage > 100 || p->percentage < 0)
				{
				printf("Invalid percentage enter again \n");
				}
				else
					break;
			}
			break;
		}
		p=p->next;
	}
	if(f==0)
		printf("Rollno not found \n");
	else
		printf("Record Updated successfully \n");
}

void search_name(void)
{
	if(head==0)
	{
		printf("No records Available \n");
		return;
	}
	struct student *p=head;
	char name1[10];
	printf("Enter the name to search \n");
	while(1)
	{
		scanf("%s",name1);
		int i=0,f1=1;
		while(name1[i]!='\0')
		{
		if(!(name1[i] >= 'a' && name1[i] <= 'z') || (name1[i] >= 'A' && name1[i] <= 'Z') || name1[i]== ' ')
			{
				f1=0;
				break;
			}
		i++;
		}
		if(f1==1)
			break;
		printf("Invalid name Enter again \n");
	}
	int f=0;
	int c=0;
	while(p)
	{
		if((strcmp(name1,p->name))==0)
		{
			f=1;
			c++;
			if(c==1)
			printf("Matching records: \n");
			printf("%d %s %f\n",p->rollno,p->name,p->percentage);
		}
		p=p->next;
	}
	if(f==0)
	{
		printf("name not found \n");
		return;
	}
	int num;
	printf("Enter the rollno of the student to modify \n");
	while(1)
	{
	scanf("%d",&num);
	if(num<=0)
		printf("Invalid rollno enter again \n");
	else
		return;
	}
	int f2=0;
	p=head;
	while(p)
	{
		if(num==p->rollno && ((strcmp(name1,p->name))==0))
		{
			f2=1;
			printf("Enter the name to update \n");
			while(1)
			{
				scanf("%s",p->name);
				int i=0,f3=1;
				while(p->name[i]!='\0')
				{
				if(!(p->name[i] >= 'a' && p->name[i] <= 'z') || (p->name[i] >= 'A' && p->name[i] <= 'Z') || p->name[i]== ' ')
					{
						f3=0;
						break;
					}
				i++;
				}
				if(f3==1)
					break;
				printf("Invalid name Enter again \n");
			}
			printf("Enter the percentage to update \n");
			while(1)
			{
				scanf("%f",&p->percentage);
				if(p->percentage > 100 || p->percentage < 0)
				{
				printf("Invalid percentage enter again \n");
				}
				else
					break;
			}
			break;
		}
		p=p->next;
	}
	if(f2==0)
		printf("Invalid Rollno \n");
	else
		printf("Record Updated successfully \n");
}

void search_percentage(void)
{
	if(head==0)
	{
		printf("No records Available \n");
		return;
	}
	struct student *p=head;
	float percentage1;
	printf("Enter the percentage to search \n");
			while(1)
			{
				scanf("%f",&percentage1);
				if(percentage1 > 100 || percentage1 < 0)
				{
				printf("Invalid percentage enter again \n");
				}
				else
					break;
			}
	int f=0;
	int c=0;
	while(p)
	{
		if(p->percentage==percentage1)
		{
			f=1;
			c++;
			if(c==1)
			printf("Matching records: \n");
			printf("%d %s %f\n",p->rollno,p->name,p->percentage);
		}
		p=p->next;
	}
	if(f==0)
	{
		printf("Percentage not found \n");
		return;
	}
	int num;
	printf("Enter the rollno of the student to modify \n");
	while(1)
	{
	scanf("%d",&num);
	if(num<=0)
		printf("Invalid rollno enter again \n");
	else
		return;
	}
	int f1=0;
	p=head;
	while(p)
	{
		if(num==p->rollno && (p->percentage==percentage1))
		{
			f1=1;
			printf("Enter the name to update \n");
			while(1)
			{
				scanf("%s",p->name);
				int i=0,f3=1;
				while(p->name[i]!='\0')
				{
				if(!(p->name[i] >= 'a' && p->name[i] <= 'z') || (p->name[i] >= 'A' && p->name[i] <= 'Z') || p->name[i]== ' ')
					{
						f3=0;
						break;
					}
				i++;
				}
				if(f3==1)
					break;
				printf("Invalid name Enter again \n");
			}
			printf("Enter the percentage to update \n");
			while(1)
			{
				scanf("%f",&p->percentage);
				if(p->percentage > 100 || p->percentage < 0)
				{
				printf("Invalid percentage enter again \n");
				}
				else
					break;
			}
			break;
		}
		p=p->next;
	}
	if(f1==0)
		printf("Invalid Rollno \n");
	else
		printf("Record Updated successfully \n");
}
