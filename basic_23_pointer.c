#include <stdio.h>
int main(){
    int a=10,*p,**q,***r,*s;
    p=&a;
    q=&p;
    r=&q;
    printf("\nThe value stored in a=\t%d",a);
    printf("\nThe address of a=\t%d",&a);
    printf("\n----------------------------------");
    printf("\nThe value stored in p=\t%d",p);
    printf("\nThe address of p=\t%d",&p);
    printf("\n Dereferencing p=\t%d",*p);
    printf("\n----------------------------------");
    printf("\nThe value stored in q=\t%d",q);
    printf("\nThe address of q=\t%d",&q);
    printf("\n Dereferencing q=\t%d",**q);
    printf("\n----------------------------------");
    printf("\nThe value stored in r=\t%d",r);
    printf("\nThe address of r=\t%d",&r);
    printf("\n Dereferencing r=\t%d",***r);


    return 0;
}