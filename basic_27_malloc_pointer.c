#include <stdio.h>
#include <stdlib.h>
int main(){
    int  i,n;
    printf("Enter a limit : ");
    scanf("%d",&n);
    int *ptr=(int *)malloc(n*sizeof(int));
    printf("Malloc pointer created\nValues before updating\n");
    for(int i=0;i<n;i++){
    printf("%d\t",*(ptr+i));
}
    printf("\nUpdating values in a pointer\n");
    for(int i=0;i<n;i++){
        printf("Enter value %d : ",i+1);
        scanf("%d",ptr+i);
    }
    printf("\nValues after updating malloc pointer\n");
    for(int i=0;i<n;i++){
        printf("%d\t",*(ptr+i));
}
    return 0;
}