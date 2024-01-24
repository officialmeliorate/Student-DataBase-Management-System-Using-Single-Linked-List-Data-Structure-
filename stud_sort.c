#include"header.h"
//Sorting according to name(For automatic rollno updation)
void stud_sort(SLL *hptr)    
{
	int i,j,count=stud_count(hptr);
	SLL *p1=hptr,*p2,temp;

	for(i=0 ; i<count-1 ; i++)
	{
		p2=p1->next;
		for(j=0 ; j<count-1-i ; j++)
		{
			if(strcmp(p1->name,p2->name)>0)
			{
				strcpy(temp.name,p1->name);
				temp.mark=p1->mark;

				strcpy(p1->name,p2->name);
				p1->mark=p2->mark;

				strcpy(p2->name,temp.name);
				p2->mark=temp.mark;
			}
			p2=p2->next;
		}
		p1=p1->next;
	}
}

//Sorting according to percentage
void stud_sort_percentage(SLL *hptr)
{
	int i,j,count=stud_count(hptr);
	SLL *p1=hptr,*p2,temp;

	for(i=0 ; i<count-1 ; i++)
	{
		p2=p1->next;
		for(j=0 ; j<count-1-i ; j++)
		{
			if((p1->mark) < (p2->mark))
			{
				strcpy(temp.name,p1->name);
				temp.mark=p1->mark;

				strcpy(p1->name,p2->name);
				p1->mark=p2->mark;

				strcpy(p2->name,temp.name);
				p2->mark=temp.mark;
			}
			p2=p2->next;
		}
		p1=p1->next;
	}
}
