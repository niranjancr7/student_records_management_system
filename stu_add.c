#include "student.h"
void add(void)
{
	struct student *new;
	new=malloc(sizeof(struct student));
	if(new==0)
	{
		printf("Memory not allocated \n");
		return;
	}
	printf("enter the name \n");
	while(1)
	{
	scanf("%s",new->name);
	int i=0,f=1;
	while(new->name[i]!='\0')
	{
		if(!(new->name[i] >= 'a' && new->name[i] <= 'z') || (new->name[i] >= 'A' && new->name[i] <= 'Z') || new->name[i]== ' ')
		{
			f=0;
			break;
		}
		i++;
	}
	if(f==1)
		break;
		printf("Invalid name Enter again \n");
	}
	printf("Enter the percentage \n");
	while(1)
	{
	scanf("%f",&new->percentage);
	if(new->percentage > 100 || new->percentage < 0)
	{
		printf("Invalid percentage enter again \n");
	}
	else
		break;
	}
	new->next=0;
	if(head==0)
	{
		new->rollno=1;
	}
	else
	{
		int num=1;
		struct student *p;
		while(1)
		{
		p=head;
		while(p!=NULL)
		{
			if(p->rollno==num)
			break;
			p=p->next;
		}
		if(p==NULL)
			break;
		num++;
		}
		new->rollno=num;
	}
	if(head==0)
	{
		head=new;
	}
	else
	{
		struct student *last=head;
		while(last->next)
			last=last->next;
		last->next=new;
	}
}
