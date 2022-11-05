#include <stdio.h>
int main(){
    int a;
    printf("Enter a number : ");
    scanf("%d",&a);
    int i=1,sum=0;
    while(i<=a){
        sum+=i;
        i++;
    }
    printf("The sum = %d",sum);

    return 0;
}