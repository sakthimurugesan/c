#include <stdio.h>
#include <stdlib.h>

int main(){
    int  n;
int n_s;
    printf("Enter no of students : ");
    scanf("%d",&n);
    int *ptr=(int *)calloc(n,sizeof(int));
    printf("Updating students marks\n");
    for(int i=0;i<n;i++){
        printf("Enter value %d : ",i+1);
        scanf("%d",ptr+i);
    }
    printf("Students marks\n");
    for(int i=0;i<n;i++){
        printf("%d\t",*(ptr+i));
}
char choi;
printf("\nDo you want to update more students (y/n)");
scanf("%s",&choi);
if (choi=='y'){
    printf("Enter the no of students : ");
    scanf("%d",&n_s);
    ptr=(int *)realloc(ptr,n_s*sizeof(int));
    for(int j=n;j<n_s+n;j++){
        printf("Enter %d value : ",j+1);
        scanf("%d",ptr+j);
    }
    printf("After updating\n");
        for(int i=0;i<n+n_s;i++){
                printf("%d\t",*(ptr+i));
        }
}
printf("\n");
    return 0;
}
