
#include "student.h"
void save(void)
{
	struct student *p=head;
	FILE *fp=fopen("Student.data","w");
	while(p)
	{
		fprintf(fp,"%d %s %f\n",p->rollno,p->name,p->percentage);
		p=p->next;
	}
	printf("data saved to the file successfully \n");
	fclose(fp);
}

void Exit(void)
{
	char op1;
	printf("s/S : save and exit \n");
	printf("e/E : exit without saving \n");
	scanf(" %c",&op1);
	switch(op1)
	{
		case 's':
		case 'S':
			save();
			delete_all();
			exit(0);
		case 'e':
		case 'E':
			delete_all();
			exit(0);
		default: printf("Invalid Choice \n");
			 break;
	}
}
