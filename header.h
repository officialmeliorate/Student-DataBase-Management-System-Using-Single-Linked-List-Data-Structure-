//Header Files

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>

typedef struct student
{
	int rollno;
	char name[20];
	float mark;
	struct student *next;
}SLL;

void stud_add(SLL **);
void stud_show(SLL *);
void stud_show_general(SLL *);
int stud_count(SLL *);
void stud_sort(SLL *);
void stud_sort_percentage(SLL *);
void stud_save(SLL *);
void del_all(SLL **);
void stud_sor_for_search(SLL *);
void stud_search_percentage(SLL *);
void stud_search_rollno(SLL *);
void stud_search_name(SLL *);
void stud_reverse_list(SLL **);
void stud_del_name(SLL **);
void stud_del_rollno(SLL **);
void stud_read(SLL **);
