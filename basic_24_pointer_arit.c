#include <stdio.h>
int main(){

    int a=10,*p,q;
    p=&a;
    printf("\nThe value stored in a=\t%d",a);
    printf("\nThe address of a=\t%d",&a);
    printf("\n\nupdating ");
    *p+=1;
    q=*p+1;
    printf("\n\nThe value stored in a=\t%d",a);
    printf("\nThe address of a=\t%d",&a);
    printf("\n----------------------------------");
    printf("\nThe value stored in p=\t%d",p);
    printf("\nThe address of p=\t%d",&p);
    printf("\n Dereferencing p=\t%d",*p);
    printf("\n----------------------------------");
    printf("\nThe value stored in q=\t%d",q);
    printf("\nThe address of q=\t%d",&q);
    
    return 0;
}