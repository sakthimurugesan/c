#include <stdio.h>
struct student
{
    int age;
    float marks;
    char *name;
};

int main(){
    struct student o,o1={20,95.5,"Hari"};
    o.age=19,o.marks=100.0,o.name="Sakthi";
    printf("\n%d\n%.f\n%s",o.age,o.marks,o.name);
    printf("\n%d\n%.1f\n%s",o1.age,o1.marks,o1.name);

    return 0;
}