#include <stdio.h>
int main(){


    int a[]={1,2,3,4,5,6};
    void *p;
    p=&a;
    printf("*p\t%d",*(int *)p);
    
    return 0;
}