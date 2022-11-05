#include <stdio.h>
int main(){
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    a+=1;
    printf("a+=1\t%d\n",a);
    a-=2;
    printf("a-=2\t%d\n",a);
    a*=5;
    printf("a*=5\t%d\n",a);
    a/=2;
    printf("a/=2\t%d\n",a);
    a%=7;
   printf("a%%=7\t%d\n",a); 
    return 0;
}