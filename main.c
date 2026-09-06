#include "student.h"
struct student *head=0;
int main()
{
	char op;
	while(1)
	{
		printf("************ STUDENT RECORDS MENU************* \n");
		printf("a/A : Add new record \n");
		printf("d/D : Delete a record \n");
		printf("s/S : Show the list \n");
		printf("m/M : Modify a record \n");
		printf("v/V : Save records \n");
		printf("b/B : Restore records \n");
		printf("t/T : Sort the list \n");
		printf("l/L : Delete all the records \n");
		printf("r/R : Reverse the list \n");
		printf("e/E : Exit \n");
		printf("Enter your choice \n");
		scanf(" %c",&op);
		switch(op)
		{
			case 'a':
			case 'A':
				add();break;
			case 'd':
			case 'D':
				del();break;
			case 's':
			case 'S':
				show();break;
			case 'm':
			case 'M':
				modify();break;
			case 'v':
			case 'V':
				save();break;
			case 'b':
			case 'B':
				restore();break;
			case 't':
			case 'T':
				sort();break;
			case 'l':
			case 'L':
				delete_all();break;
			case 'r':
			case 'R':
				reverse();break;
			case 'e':
			case 'E':
				Exit();break;
			default: printf("Invalid Choice \n");
				 break;
		}
	}
	return 0;
}
