#include <stdio.h>
struct student
{
    int age;
    float marks;
    char *name;
};

int main(){
    struct student o1={20,95.5,"Hari"};
    struct student *ptr=&o1;
    printf("\n%d\n%.1f\n%s",o1.age,o1.marks,o1.name);
    printf("\n\n");
    printf("\n%d\n%.1f\n%s",ptr->age,ptr->marks,ptr->name);
    printf("\n\n");
    printf("\n%d\n%.1f\n%s",(*ptr).age,(*ptr).marks,(*ptr).name);

    return 0;
}