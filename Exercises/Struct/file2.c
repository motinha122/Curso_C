#include <stdio.h>
#include <stdlib.h>

typedef struct InfoStudents 
{
    char name[20];
    char surname[20];
    char class[10];
    char address[200];
} Student;

void access_students_infos(Student const stu)
{
    printf("Name: %s\n",stu.name);
    printf("Surname: %s\n",stu.surname);
    printf("Class: %s\n",stu.class);
    printf("Address: %s\n",stu.address);
}

int main()
{
    Student a = {"Joao","Rei Delas","Agiota","Xampson's Avenue N666"};
    access_students_infos(a);
    system("pause");
    return 0;
}
