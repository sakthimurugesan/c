#include <stdio.h>

int a=100;

void disp();

int main(){
    disp();
    a++;
    disp();
    return 0;
}

void disp(){
    printf("\nThe value stored in a=%d",a);
}