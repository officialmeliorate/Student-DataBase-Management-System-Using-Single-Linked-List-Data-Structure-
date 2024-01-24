DataBase:main.o stud_add.o stud_count.o stud_del.o stud_file.o stud_reverse_link.o stud_search.o stud_show.o stud_sort.o

	cc main.o stud_add.o stud_count.o stud_del.o stud_file.o stud_reverse_link.o stud_search.o stud_show.o stud_sort.o -o DataBase

main.o:main.c
	cc -c main.c
stud_add.o:stud_add.c
	cc -c stud_add.c
stud_count.o:stud_count.c	
	cc -c stud_count.c
stud_del.o:stud_del.c
	cc -c stud_del.c
stud_file.o:stud_file.c
	cc -c stud_file.c
stud_reverse_link.o:stud_reverse_link.c
	cc -c stud_reverse_link.c
stud_search.o:stud_search.c
	cc -c stud_search.c
stud_show.o:stud_show.c
	cc -c stud_show.c
stud_sort.o:stud_sort.c
	cc -c stud_sort.c
clear:
	@echo "cleaning up..."
	@rm -v *.o
