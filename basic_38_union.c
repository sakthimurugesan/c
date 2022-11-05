#include <stdio.h>

union demo
{
    int a;char b;
}o,o1;


int main(){
    o.a=65;
    o1.a=69;
    o1.b='F';
    printf("\no.a=%d\no.b=%c\n",o.a,o.b);
    printf("\no1.a=%d\no1.b=%c\n",o1.a,o1.b);
    
    return 0;
}