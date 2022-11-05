#include <stdio.h>
int main(){
    int a;
     printf("Enter a number : ");
    scanf("%d",&a);
    int i=1,sum=0;
    for(i=1;i<=a;i++){
        sum+=i;
    }
    printf("The sum = %d",sum);
    return 0;
}