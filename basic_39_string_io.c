#include <stdio.h>
int main(){

    int a;
    char c,name[50];
    printf("\nEnter a value : ");
    scanf("%d",&a);
    printf("Enter a character : ");
    fflush(stdin);
    c=getchar();
    printf("Enter a string : ");
    fflush(stdin);
    gets(name);
    puts(name);

    
    return 0;
}