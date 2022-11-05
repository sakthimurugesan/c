#include <stdio.h>
struct student
{
    int age;
    float marks;
    char *name;
};

int main(){
    struct student o[2];
    o[0].age=20,o[0].marks=95.98,o[0].name="Sakthi";
    printf("\n%d\n%.1f\n%s",o[0].age,o[0].marks,o[0].name);
    o[1].age=21,o[1].marks=98.98,o[1].name="Hari";
    printf("\n%d\n%.1f\n%s",o[1].age,o[1].marks,o[1].name);
    return 0;
}