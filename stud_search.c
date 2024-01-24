#include"header.h"
void stud_sort_for_search(SLL *hptr)
{
	int rollno=0;
	if(hptr==0)
	{
		printf("\n\033[31mNo Records Found\n\033[0m");
		return;
	}

	stud_sort(hptr);
	while(hptr)
	{
		rollno++;
		hptr->rollno=rollno;
		hptr=hptr->next;
	}
}

void stud_search_rollno(SLL *hptr)
{
	if(hptr==0)
	{
		printf("\n\033[31mNo Records Found\n\033[0m");
		return;
	}
	stud_sort_for_search(hptr);
	int flag=0,rollnumber;
	printf("\033[34mEnter RollNo: \033[0m");
	scanf("%d",&rollnumber);

	while(hptr)
	{
		if(rollnumber==hptr->rollno)
		{
			flag=1;
			printf("\n\033[34mDetails for Searched Rollno is..\033[0m\n");
			printf("%d %.2f %s\n",hptr->rollno,hptr->mark,hptr->name);
		}
		hptr=hptr->next;
	}
	if(flag==0)
		printf("\n\033[31mSearch Result Not Found\n\033[0m");
}

void stud_search_percentage(SLL *hptr)
{
	SLL *demo=hptr;
	SLL *demo2=hptr;
	if(hptr==0)
	{
		printf("\n\033[31mNo Records Found\n\033[0m");
		return;
	}
	stud_sort_for_search(hptr);
	int count=0,Rollno,option;
	float percentage,update,new_per;
	printf("\033[34mEnter Percentage: \033[0m");
	scanf("%f",&percentage);
	while(demo)
	{
		if(percentage==demo->mark)
			count++;
		demo=demo->next;
	}
	if(count==1)
	{
		while(demo2)
		{
			if(percentage==demo2->mark)
			{	
				printf("\033[34mPress 1--To Update Percentage\nPress Any--To Return\n\033[0m");
				scanf("%d",&option);
				if(option==1)
				{
					printf("\033[34mEnter Updated Percentage: \033[0m");
					scanf("%f",&update);
					demo2->mark=update;
				}
				else
					return;
			}
			demo2=demo2->next;
		}
	}
	else if(count>1)
	{
		printf("\n\033[31mSearch Result Found morethan once\n\033[0m");
		printf("\033[34mEnter Rollno: \033[0m");
		scanf("%d",&Rollno);

		while(hptr)
		{
			if((hptr->mark==percentage) && (Rollno==hptr->rollno))
			{
				printf("\n\033[34mDetails for Searched Percentage is..\033[0m\n");
				printf("%d %.2f %s\n",hptr->rollno,hptr->mark,hptr->name);
				printf("\033[34mPress 1--To Update Percentage\nPress Any--To Return\n\033[0m");
				scanf("%d",&option);
				if(option==1)
				{
					printf("\033[34mEnter New Percentage: \033[0m");
					scanf("%f",&new_per);
					hptr->mark=new_per;
				}
				else
					return;
			}
			hptr=hptr->next;
		}
	}
	else
		printf("\n\033[31mSearch Result Not Found\n\033[0m");
}

void stud_search_name(SLL *hptr)
{
	SLL *demo=hptr;
	SLL *demo2=hptr;
	if(hptr==0)
	{
		printf("\n\033[31mNo Records Found\n\033[0m");
		return;
	}
	stud_sort_for_search(hptr);
	int flag=0,count=0,option,Rollno;
	char n[30],new[30];
	printf("\033[34mEnter Name: \033[0m");
	scanf(" %[^\n]",n);

	while(demo)
	{
		if(strcmp(n,demo->name)==0)
		{
			count++;
		}
		demo=demo->next;
	}
	if(count==1)
	{
		while(demo2)
		{
			if(strcmp(n,demo2->name)==0)
			{
				printf("\n\033[34mDetails for Searched Name is..\033[0m\n");
				printf("%d %.2f %s\n",demo2->rollno,demo2->mark,demo2->name);	
				printf("\033[34mPress 1--To Update Name\nPress Any--To Return\n\033[0m");
				scanf("%d",&option);
				if(option==1)
				{
					printf("\033[34mEnter New Name: \033[0m");
					scanf(" %[^\n]",new);
					strcpy(demo2->name,new);
				}
				else
					return;
			}
			demo2=demo2->next;
		}
	}
	else if(count>1)
	{
		printf("\n\033[31mSearch Result Found morethan once\n\033[0m");
		printf("\033[34mEnter Rollno: \033[0m");
		scanf("%d",&Rollno);

		while(hptr)
		{
			if((strcmp(n,hptr->name)==0) && (Rollno==hptr->rollno))
			{
				flag=1;
				printf("\n\033[34mDetails for Searched Name is..\033[0m\n");
				printf("%d %.2f %s\n",hptr->rollno,hptr->mark,hptr->name);
				printf("\033[34mPress 1--To Update Name\nPress Any--To Return\n\033[0m");
				scanf("%d",&option);
				if(option==1)
				{
					printf("\033[34mEnter New Name: \033[0m");
					scanf(" %[^\n]",new);
					strcpy(hptr->name,new);
				}
				else
					return;
			}
			hptr=hptr->next;
		}
	}
	else
		printf("\n\033[31mSearch Result Not Found\n\033[0m");
}

