#include"header.h"
int main()
{
	SLL *hptr=0;
	char op;
	while(1)
	{
		sleep(1);
		printf("\n\033[31;1m****STUDENT RECORD MENU****\033[0m\n");
		printf("\033[31m***************************\033[0m");
		printf("\n\033[32ma/A : Add New Record\nd/D : Delete a Record\ns/S : Show the List\nm/M : Modify a Record\nv/V : Save\nr/R : Read File\033[0m\n");
		printf("\033[32me/E : Exit\nt/T : Sort the List\nl/L : Delete all the Records\nr/R : Reverse the List\033[0m\n");
		printf("\033[31m***************************\033[0m\n");
		printf("\033[34mEnter Your Choice: \033[0m");
		scanf(" %c",&op);
		printf("\033[31m***************************\033[0m\n");

		//Add a Node(Add Middle Logic)
		if(op=='a' | op=='A')
		{
			printf("\n\033[34mYou Choosen-Add New Record\n\033[0m");
			printf("\033[32m***************************\033[0m\n");
			stud_add(&hptr);
		}
		
		//Delete a node
		else if(op=='d' | op=='D')
		{
			printf("\n\033[34mYou Choosen-Delete a Record\n\033[0m");
			printf("\033[32m***************************\033[0m\n");
			char op_d;
			printf("\033[34mR/r--To Delete Node According to Rollno\nN/n--To Delete Node According to Name\n\033[0m");
			scanf(" %c",&op_d);
			if(op_d=='R' || op_d=='r')
			{
				stud_del_rollno(&hptr);
			}
			else if(op_d=='N' || op_d=='n')
			{
				stud_del_name(&hptr);
			}
			else
				printf("\n\033[31mInvalid Input...\n\033[0m");
		}

		//Print Nodes
		else if(op=='s' | op=='S')
		{
			printf("\n\033[34mYou Choosen-Show the List\n\033[0m");
			printf("\033[32m***************************\033[0m\n");
			stud_show(hptr);
		}

		//Modify
		else if(op=='m' | op=='M')
		{
			char op_m;
			printf("\n\033[34mYou Choosen-Modify a Record\n\033[0m");
			printf("\033[32m***************************\033[0m\n");
			printf("\033[34mR/r--To Search a Rollno\nN/n--To Search a Name\nP/p--Percentage Based\n\033[0m");
			printf("\033[32m***************************\033[0m\n");
			printf("\033[34mEnter Your Choice: \033[0m");
			scanf(" %c",&op_m);
			printf("\033[32m***************************\033[0m\n");

			if(op_m=='R' || op_m=='r')
			{
				stud_search_rollno(hptr);
			}
			else if(op_m=='N' || op_m=='n')
			{
				stud_search_name(hptr);
			}
			else if(op_m=='P' || op_m=='p')
			{
				stud_search_percentage(hptr);
			}
			else
				printf("\n\033[31mInvalid Input...\n\033[0m");
		}

		//Save Data
		else if(op=='v' | op=='V')
		{
			printf("\n\033[34mYou Choosen-Save\n\033[0m");
			printf("\033[32m***************************\033[0m\n");
			stud_save(hptr);
		}

		//Read Data
		else if(op=='r' || op=='R')
		{
			printf("\n\033[34mYou Choosen-Read\n\033[0m");
			printf("\033[32m***************************\033[0m\n");
			stud_read(&hptr);
		}
		
		//Exit
		else if(op=='e' | op=='E')
		{
			printf("\n\033[34mYou Choosen-Exit\n\033[0m");
			printf("\033[32m***************************\033[0m\n");

			char op_e;
			printf("\033[34mS/s--Save and Exit\nE/e--Exit Without Saving\n\033[0m");
			printf("\033[32m***************************\033[0m\n");
			printf("\033[34mEnter Your Choice: \033[0m");
			scanf(" %c",&op_e);
			printf("\033[32m***************************\033[0m\n");

			if(op_e=='S' || op_e=='s')
			{
				stud_save(hptr);
				exit(0);
			}
			else if(op_e=='E' || op_e=='e')
				exit(0);
			else
				printf("\n\033[31mInvalid Input...\n\033[0m");

		}

		//Sort Data
		else if(op=='t' | op=='T')
		{
			printf("\n\033[34mYou Choosen-Sort the List\n\033[0m");
			printf("\033[32m***************************\033[0m\n");
			
			char op_e;
			printf("\033[34mN/n--Sort with name\nP/p--Sort with percentage\n\033[0m");
			printf("\033[32m***************************\033[0m\n");
			printf("\033[34mEnter Your Choice: \033[0m");
			scanf(" %c",&op_e);
			printf("\033[32m***************************\033[0m\n");

			if(op_e=='N' || op_e=='n')
			{
				stud_sort(hptr);
				printf("\033[32mData Sorted According to Name Sucessfully\033[0m\n");
				stud_show(hptr);
			}
			else if(op_e=='P' || op_e=='p')
			{
				stud_sort_percentage(hptr);
				printf("\033[32mData Sorted According to Percentage Sucessfully\033[0m\n");
				stud_show_general(hptr);
			}
			else
				printf("\n\033[31mInvalid Input...\n\033[0m");
		}

		//Delete all the records
		else if(op=='l' | op=='L')
		{
			printf("\n\033[34mYou Choosen-Delete all the records\n\033[0m");
			printf("\033[32m***************************\033[0m\n");
			del_all(&hptr);
		}

		//Reverse list(not working)
		else if(op=='r' | op=='R')
		{
			printf("\n\033[34mYou Choosen-Reverse the list\n\033[0m");
			printf("\033[32m***************************\033[0m\n");
			stud_reverse_list(&hptr);
		}

		//Invalid Input
		else
		{
			printf("\n\033[31mInvalid Input...\n\033[0m");
		}
	}
}
