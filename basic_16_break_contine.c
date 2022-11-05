#include <stdio.h>
#include <string.h>
int main(){
    int a[]={1,2,3,4,5,6};
    for(int i=0;i<sizeof(a)/sizeof(int);i++){
        if(a[i]%5==0){
            break;
        }
        printf("%d\n",a[i]);
    }
    printf("------------------------------------");
    for(int i=0;i<sizeof(a)/sizeof(int);i++){
        if(a[i]%5==0){
            continue;
        }
        printf("%d\n",a[i]);
    }

    return 0;
}