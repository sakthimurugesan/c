#include <stdio.h>

int main(){
    FILE *fp;
    fp=fopen("sample.txt","a");
    fprintf(fp,"\nline 5");
    fclose(fp);

    return 0;
}