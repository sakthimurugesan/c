#include <stdio.h>
int main(){

    FILE *fp;
    char c;
    fp=fopen("sample.txt","r");
    while(1){
        c=fgetc(fp);
        if(c==EOF){
            return 0;
        }
        printf("%c",c);
    }
    
    return 0;
}