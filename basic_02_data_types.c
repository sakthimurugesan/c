#include <stdio.h>
int main(){
int a=12;
float f=12.523f;
char s[10]="sakthi";
char b='A';
printf("int a=\t%d\nfloat f=\t%.0f\nchar s[10]=\t%s\n",a,f,s);
printf("char b='A'\nb\t%d\n%c",b,b);

int a=0xA;
printf("%d",a);
return 0;
}