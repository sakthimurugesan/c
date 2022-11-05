#include <stdio.h>
int main(){

int a=0;
hello:
printf("\nThe value = %d",a);

a++;
if(a!=20){
 goto hello;

}



    return 0;
}