#include <stdio.h>
#include <stdlib.h>
int choi;
int * gett_values(){
    int i;
    printf("Enter the no of values : ");
    scanf("%d",&choi);
    int *ptr=(int *)malloc(choi*sizeof(int));
    for(i=0;i<choi;i++){
    printf("Enter the values : ");
    scanf("%d",ptr+i);
    }
    return ptr;
    
}
int main(){
    int sum=0;
    int *ptr;
    ptr=gett_values();
    for(int i=0;i<choi;i++){
        sum+=*(ptr+i);
    }
    printf("Total : %d",sum);
    free(ptr);
     ptr=NULL;
    return 0;
}