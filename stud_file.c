#include"header.h"
void stud_save(SLL *hptr)
{
	if(hptr==0)
	{
		printf("\n\033[31mNo Records Found\n\033[0m");
		return;
	}
	FILE *fp=fopen("student.dat","w");
	while(hptr)
	{
		fprintf(fp,"%d %.2f %s\n",hptr->rollno,hptr->mark,hptr->name);
		hptr=hptr->next;
	}
	printf("\033[32mData Saved Sucessfully\033[0m\n");
	fclose(fp);
}

void stud_read(SLL **hptr)
{
	SLL *last;
	FILE *fp=fopen("student.dat","r");
	if(fp==0)
	{	
		printf("\n\033[31mFile is not present\n\033[0m");
		return;
	}
	while(1)
	{
		SLL *new=malloc(sizeof(SLL));
		if(fscanf(fp,"%d %f %s",&new->rollno,&new->mark,new->name)==-1)
			break;
		new->next=0;
		if(*hptr==0)
			*hptr=new;
		else
		{
			last=*hptr;
			while(last->next)
				last=last->next;
			last->next=new;
		}
	}
}

