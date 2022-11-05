#include <stdio.h>
int main(){

int a,b,c;
printf("Enter number 1 : ");
scanf("%d",&a);
printf("Enter number 2 : ");
scanf("%d",&b);
printf("Enter number 3 : ");
scanf("%d",&c);    

if(a>b && a>c){
    printf("A is greater than B and C");return 0;}
else if(a<b && b>c){
    printf("B is greater than A and C");return 0;}
else{
    printf("C is greater than A and B");return 0;}
return 0;
}