#include"header.h"
void stud_add(SLL **hptr)
{
	SLL *last,temp;
	SLL *new=malloc(sizeof(SLL));
	printf("\033[33m***************************\033[0m\n");
	printf("\033[34mEnter Name: \033[0m");
	scanf(" %[^\n]",new->name);
	printf("\n\033[34mEnter Percentage: \033[0m");
	scanf("%f",&new->mark);
	printf("\033[33m***************************\033[0m\n");

		if(*hptr==0)
		{
			new->next=*hptr;
			*hptr=new;
		}
		else
		{
			last=*hptr;
			while(last->next)
				last=last->next;
			new->next=last->next;
			last->next=new;
		}
	
}
