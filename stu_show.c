#include "student.h"
void show(void)
{
	struct student *p=head;
	if(p==0)
	{
		printf("No records Available \n");
		return;
	}
	printf("------------------------------------------- \n");
	printf("Roll No. Name Percentage \n");
	printf("------------------------------------------- \n");
	while(p)
	{
		printf("%d %s %f\n",p->rollno,p->name,p->percentage);
		p=p->next;
	}
	printf("--------------------------------------------\n");
}

void reverse(void)
{
	if(head==0)
	{
		printf("No records Available \n");
		return;
	}
	struct student *p=head,*next,*prev=0;
	int f=0;
	while(p!=0)
	{
		f=1;
		next=p->next;
		p->next=prev;
		prev=p;
		p=next;
	}
	head=prev;
	if(f==1)
	printf("Data Reversed Successfully \n");
}
