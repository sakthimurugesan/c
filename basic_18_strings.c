#include <stdio.h>
#include <string.h>
int main(){
    
    char ram[]="Ram";
    char kumar[]="Kumar";
    char prasana[15]="Prasana";
printf("\ncompare\t:%d",strcmp(ram,kumar));
printf("\nlength\t:%d",strlen(ram));
printf("\nreverse\t:%s",strrev(ram));
printf("\nreverse\t:%s",strrev(ram));
printf("\nuppercase\t:%s",strupr(ram));
printf("\nlowercase\t:%s",strlwr(ram));
strcpy(ram,prasana);
printf("\ncopy\t:%s",ram);
strcat(ram,kumar);
printf("\nconcatenation\t:%s",ram);
    return 0;
}