#include"header.h"
int stud_count(SLL *hptr)
{
	int count=0;
	while(hptr)
	{
		count++;
		hptr=hptr->next;
	}
	return count;
}
