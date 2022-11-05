#include <stdio.h>
struct student
{
    int age;
    float marks;
    char *name;
};


typedef struct student s;

void disp()
{
  struct student_1
{
    int age;
    float marks;
    char *name;
};
struct student_1 o1={19,97.7,"Hari"};
printf("\n%d\n%.1f\n%s",o1.age,o1.marks,o1.name);


}

int main(){

    s o1={20,99.87,"Balu"};
    printf("\n%d\n%.1f\n%s",o1.age,o1.marks,o1.name);
    printf("\n-------------------------------------\n");
    disp();
    return 0;

}