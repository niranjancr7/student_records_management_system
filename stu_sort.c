#include "student.h"
void sort(void)
{
	char op1;
	printf("n/N : sort with name \n");
	printf("p/P : sort with percentage \n");
	scanf(" %c",&op1);
	switch(op1)
	{
		case 'n':
		case 'N':
			sort_name();break;
		case 'p':
		case 'P':
			sort_percentage();break;
		default: printf("Invalid Choice \n");
			 break;
	}
}

void sort_name(void)
{
	if(head==0)
	{
		printf("No records available \n");
		return;
	}
	struct student *p,*q;
	int temp_rollno;
	char temp_name[10];
	float temp_percentage;
	for(p=head;p!=0;p=p->next)
	{
		for(q=p->next;q!=0;q=q->next)
		{
			if((strcmp(p->name,q->name))>0)
			{
				temp_rollno=p->rollno;
				p->rollno=q->rollno;
				q->rollno=temp_rollno;

				strcpy(temp_name,p->name);
				strcpy(p->name,q->name);
				strcpy(q->name,temp_name);

				temp_percentage=p->percentage;
				p->percentage=q->percentage;
				q->percentage=temp_percentage;
			}
		}
	}
	printf("Records sorted successfully \n");
}
void sort_percentage(void)
{
	if(head==0)
	{
		printf("No records available \n");
		return;
	}
	struct student *p,*q;
	int temp_rollno;
	char temp_name[10];
	float temp_percentage;
	for(p=head;p!=0;p=p->next)
	{
		for(q=p->next;q!=0;q=q->next)
		{
			if(p->percentage < q->percentage)
			{
				temp_rollno=p->rollno;
				p->rollno=q->rollno;
				q->rollno=temp_rollno;

				strcpy(temp_name,p->name);
				strcpy(p->name,q->name);
				strcpy(q->name,temp_name);

				temp_percentage=p->percentage;
				p->percentage=q->percentage;
				q->percentage=temp_percentage;
			}
		}
	}
	printf("records sorted successfully \n");
}
