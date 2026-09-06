#include "student.h"
void restore(void)
{
	FILE *fp=fopen("Student.data","r");
	if(fp==0)
	{
		printf("File not present \n");
		return;
	}
	struct student *new;
	while(1)
	{
	new=malloc(sizeof(struct student));
	if((fscanf(fp,"%d%s%f",&new->rollno,new->name,&new->percentage))==-1)
		break;
	new->next=0;
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
	printf("Data Restored Successfully \n");
	fclose(fp);
}
