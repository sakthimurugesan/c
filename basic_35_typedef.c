#include <stdio.h>
struct student
{
    int age;
    float marks;
    char *name;
};

int main(){
    typedef struct student s;
    typedef int i;
    s o1={20,96.7,"Hari"};
    printf("\n%d\n%.1f\n%s",o1.age,o1.marks,o1.name);
    i a=12;
    printf("\n%d",a);

    return 0;
}