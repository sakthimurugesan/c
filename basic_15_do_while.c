#include <stdio.h>
int main(){
    int a;
    printf("Enter a number : ");
    scanf("%d",&a);
    int i=1,sum=0;
    do{
        printf("\n%d",i);
        i++;
    }while(i<=a);
    printf("\nThe sum = %d",sum);

    return 0;
}