#include"header.h"
void del_all(SLL **hptr)
{
	if(*hptr==0)
	{
		printf("\n\033[31mNo Records Found\n\033[0m");
		return;
	}
	int c=1;
	SLL *del=*hptr;
	while(del)
	{
		*hptr=del->next;
		free(del);
		sleep(1);
		printf("\n\033[34mNode %d deleted\n\033[0m",c++);
		del=*hptr;
	}
	printf("\n\033[34mAll nodes deleted sucessfully\n\033[0m");
}

void stud_del_rollno(SLL **hptr)
{
	if(*hptr==0)
	{
		printf("\n\033[31mNo Records Found\n\033[0m");
		return;
	}
	int roll;	
	printf("\033[34mEnter Rollno to Delete: \033[0m");
	scanf("%d",&roll);
	SLL *del=*hptr,*prev;

	while(del)
	{
		if(roll==del->rollno)
		{
			if(del==*hptr)
				*hptr=del->next;
			else
				prev->next=del->next;
			free(del);
			sleep(1);
			printf("\n\033[31mDeleted sucessfully\n\033[0m");
			return;
		}
		prev=del;
		del=del->next;
	}
	printf("\n\033[31mRollno Not Found\n\033[0m");
}

void stud_del_name(SLL **hptr)
{
	if(*hptr==0)
	{
		printf("\n\033[31mNo Records Found\n\033[0m");
		return;
	}
	char name[30];
	printf("\033[34mEnter Name to Delete: \033[0m");
	scanf(" %[^\n]",name);
	SLL *del=*hptr,*prev;

	while(del)
	{
		if(strcmp(name,del->name)==0)
		{
			if(del==*hptr)
				*hptr=del->next;
			else
				prev->next=del->next;
			free(del);
			sleep(1);
			printf("\n\033[31mDeleted sucessfully\n\033[0m");
			return;
		}
		prev=del;
		del=del->next;
	}
	printf("\n\033[31mName Not Found\n\033[0m");
}

