#include <stdio.h>
int main(){
    int a=12,b=13;
    printf("a=%d\nb=%d",a,b);
    printf("\na==12&&b>a  %d",a==12&&b>a);
    printf("\n!(a==12&&b>a)  %d",!(a==12&&b>a));
    printf("\na==12||b<a  %d",a==12||b<a);
    return 0;
}