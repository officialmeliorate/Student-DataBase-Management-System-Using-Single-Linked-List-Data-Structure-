#include"header.h"
void stud_reverse_list(SLL **hptr)
{
	if(*hptr==0)
	{
		printf("\n\033[31mNo Records Found\n\033[0m");
		return;
	}
	SLL *temp=*hptr;
	int i,c=stud_count(*hptr);
	if(c>=2)
	{
		SLL **arr;
		arr=malloc(sizeof(SLL*)*c);

		for(i=0 ; i<c ; i++)
		{
			arr[i]=temp;
			temp=temp->next;
		}
		for(i=1 ; i<c ; i++)
		{
			arr[i]->next=arr[i-1];
		}
		(arr[0]->next)=0;
		*hptr=arr[c-i];
	}
}
