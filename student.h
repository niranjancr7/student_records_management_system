#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student
{
	int rollno;
	char name[50];
	float percentage;
	struct student *next;
};
extern struct student *head;
void add(void);
void del(void);
void show(void);
void modify(void);
void save(void);
void restore(void);
void sort(void);
void delete_all(void);
void reverse(void);
void Exit(void);
void del_rollno(void);
void del_name(void);
int count(void);
void search_rollno(void);
void search_name(void);
void search_percentage(void);
void sort_name(void);
void sort_percentage(void);

