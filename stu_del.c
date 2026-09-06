#include "student.h"
void del(void)
{
	char op1;
	printf("R/r : Delete by Rollno \n");
	printf("N/n : Delete by Name \n");
	scanf(" %c",&op1);
	switch(op1)
	{
		case 'r':
		case 'R':
			del_rollno();
			break;
		case 'n':
		case 'N':
			del_name();
			break;
		default: printf("Invalid choice \n");
			 break;
	}
}

void delete_all(void)
{
	if(head==0)
	{
		printf("No records found \n");
		return;
	}
	struct student *del=head;
	while(del)
	{
		head=del->next;
		free(del);
		del=head;
	}
	head=0;
	printf("All the records deleted successfully \n");
}

void del_rollno(void)
{
	if(head==0)
	{
		printf("No records available \n");
		return;
	}
	struct student *del=head,*prev=0;
	int num;
	printf("Enter the rollno \n");
	while(1)
	{
	scanf("%d",&num);
	if(num<=0)
		printf("Invalid rollno enter again \n");
	else
		return;
	}
	int c1=0;
	int c=count();
	int f=0;
	while(del)
	{
		c1++;
		if(c1==num)
		{
			f=1;
			if(c1==1)
			{
				head=del->next;
				free(del);
			}
			else if(c1>1 && c1<c)
			{
				prev->next=del->next;
				free(del);
			}
			else
			{
				prev->next=0;
				free(del);
			}
		}
		prev=del;
		del=del->next;
	}
	if(f==0)
		printf("Rollno Not Found \n");
	else
		printf("Record deleted successfully \n");
}

void del_name(void)
{
	if(head==0)
	{
		printf("No records available \n");
		return;
	}
	struct student *del=head,*prev=0;
	char name[10];
	printf("Enter the name \n");
			while(1)
			{
				scanf("%s",name);
				int i=0,f1=1;
				while(name[i]!='\0')
				{
				if(!(name[i] >= 'a' && name[i] <= 'z') || (name[i] >= 'A' && name[i] <= 'Z') || name[i]== ' ')
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
	int c=count();
	int f=0;
	int c1=0;
	while(del)
	{
		c1++;
		if((strcmp(name,del->name))==0)
		{
			f=1;
			if(c1==1)
			{
				head=del->next;
				free(del);
			}
			else if(c1>1 && c1<c)
			{
				prev->next=del->next;
				free(del);
			}
			else
			{
				prev->next=0;
				free(del);
			}
		}
		prev=del;
		del=del->next;
	}
	if(f==0)
		printf("Name Not Found \n");
	else
		printf("Record deleted successfully \n");
}

int count(void)
{
	struct student *p=head;
	int c=0;
	while(p!=0)
	{
		c++;
		p=p->next;
	}
	return c;
}

	
