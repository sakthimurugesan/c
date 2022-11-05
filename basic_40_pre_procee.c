#include <stdio.h>
#define limit 5
#define msg "Welcome to learn c programming"
#define disp(a)\
printf("\n"#a)
int main(){
    int a=limit;
    printf("%d\n",a);
    printf("%s",msg);
    disp(hello);
    return 0;
}