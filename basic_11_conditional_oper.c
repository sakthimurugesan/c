#include <stdio.h>
int main(){
    
int a,b,c;
printf("Enter number 1 : ");
scanf("%d",&a);
printf("Enter number 2 : ");
scanf("%d",&b);
c=a>b?a:b;
printf("The greatest number is : %d",c);
   return 0;
}