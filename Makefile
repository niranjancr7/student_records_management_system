student: main.o stu_add.o stu_del.o stu_show.o stu_mod.o stu_save.o stu_restore.o stu_sort.o
	gcc main.o stu_add.o stu_del.o stu_show.o stu_mod.o stu_save.o stu_restore.o stu_sort.o -o student

main.o: main.c student.h
	gcc -c main.c

stu_add.o: stu_add.c student.h
	gcc -c stu_add.c

stu_del.o: stu_del.c student.h
	gcc -c stu_del.c

stu_show.o: stu_show.c student.h
	gcc -c stu_show.c

stu_mod.o: stu_mod.c student.h
	gcc -c stu_mod.c

stu_save.o: stu_save.c student.h
	gcc -c stu_save.c

stu_restore.o: stu_restore.c student.h
	gcc -c stu_restore.c

stu_sort.o: stu_sort.c student.h
	gcc -c stu_sort.c

clean:
	rm -f *.o student
