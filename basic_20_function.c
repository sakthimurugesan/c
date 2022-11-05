#include <stdio.h>
void disp(){
    printf("hello");
}
int fact(int n){
    int i=1,f=1;
    for(i=1;i<=n;i++){
        f*=i;
    }
    return f;
}

int main(){
    int s;
    disp();
    printf("\nEnter a number : ");
    scanf("%d",&s);
    printf("The factorial of %d is %d",s,fact(s));
    return 0;
}
