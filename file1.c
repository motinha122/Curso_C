//Struct with pointers 

#include <stdio.h>
#include <stdlib.h> //lib to use malloc and calloc

typedef struct InfoStudents 
{
    char* name;
    char* surname;
    char* class;
    char* address;
} Student;

void access_students_infos(Student const *stu)
{
    printf("Name: %s\n",stu->name); 
    printf("Surname: %s\n",stu->surname);
    printf("Class: %s\n",stu->class);
    printf("Address: %s\n",stu->address);
    // arrow instead of dot 
}

int main()
{
    Student a = {"Joao","Rei Delas","Agiota","Xampson's Avenue N666"};

    access_students_infos(&a);
    system("pause");
    return 0;
}
