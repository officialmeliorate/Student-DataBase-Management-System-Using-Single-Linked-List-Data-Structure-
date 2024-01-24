#include"header.h"
//Assigning rollno based on name
void stud_show(SLL *hptr)
{
	int rollno=0;
	if(hptr==0)
	{
		printf("\n\033[31mNo Records Found\n\033[0m");
		return;
	}

	stud_sort(hptr);

	printf("\n\033[32;1m|-------|------------------|-------------------------------|\033[0m\n");
	printf(" RollNo\t\tPercentage\t\t  Name\n");
	printf("\n\033[32;1m|-------|------------------|-------------------------------|\033[0m\n");
	
	while(hptr)
	{
		rollno++;
		hptr->rollno=rollno;
		printf("  %d\t          %.2f\t\t\t%s\n",hptr->rollno,hptr->mark,hptr->name);
		printf("\n\033[32;1m|-------|------------------|-------------------------------|\033[0m\n");
		hptr=hptr->next;
	}
}

//Assigning rollno
void stud_show_general(SLL *hptr)
{
	int rollno=0;
	if(hptr==0)
	{
		printf("\n\033[31mNo Records Found\n\033[0m");
		return;
	}

	printf("\n\033[32;1m|-------|------------------|-------------------------------|\033[0m\n");
	printf(" RollNo\t\tPercentage\t\t  Name\n");
	printf("\n\033[32;1m|-------|------------------|-------------------------------|\033[0m\n");
	
	while(hptr)
	{
		rollno++;
		hptr->rollno=rollno;
		printf("  %d\t          %.2f\t\t\t%s\n",hptr->rollno,hptr->mark,hptr->name);
		printf("\n\033[32;1m|-------|------------------|-------------------------------|\033[0m\n");
		hptr=hptr->next;
	}
}

