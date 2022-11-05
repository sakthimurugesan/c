#include <stdio.h>
int main(){
    
    int a[]={1,2,3,4,5,6};int *b;
    b=&a;
    for(int i=0;i<sizeof(a)/sizeof(int);i++){
        printf("%d\t",*b);
        ++b;
    }
    


    return 0;
}